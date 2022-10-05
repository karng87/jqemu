#!/bin/bash
~/Project/u-boot/tools/mkimage \
    -A arm \
    -C none \
    -T kernel \
    -a 0x60000000 \
    -e 0x60000000 \
    -d build/startup.bin \
    bare-arm.uimg


command -v qemu-img > /dev/null || { echo "qemu-img not installed"; exit 1; }
command -v qemu-nbd > /dev/null || { echo "qemu-nbd not installed"; exit 1; }

# create a 64M SD card image
qemu-img create sd.img 64M

# qemu-nbd -c connect network block device with SD image
# qemu-nbd -d disconnect network block device with SD image
sudo qemu-nbd -f raw -c /dev/nbd0 sd.img

# create a single  prtision : nbd0p1
(echo o;
echo n; echo p
echo 1
echo ; echo
echo w) | sudo fdisk /dev/nbd0

#format to ext4
sudo mkfs.ext2 /dev/nbd0p1

if [ ! -d tmp ]; then mkdir tmp; fi 
sudo mount -o user /dev/nbd0p1 tmp/
sudo cp bare-arm.uimg tmp/
sudo umount tmp
rm -rf tmp || true
sudo qemu-nbd -d /dev/nbd0
