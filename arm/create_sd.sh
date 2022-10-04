#!/bin/bash

SD_name="$1"
UIMG_name="$2"

if [ "$#" -ne 2 ]; then echo "Usage: "$0" sdimage uimage"; exit 1; fi

~/Project/u-boot/tools/mkimage \
    -A arm \
    -C none \
    -T kernel \
    -a 0x60000000 \
    -e 0x60000000 \
    -d build/startup.bin\
    "$UIMG_name"


command -v qemu-img > /dev/null || { echo "qemu-img not installed"; exit 1; }
command -v qemu-nbd > /dev/null || { echo "qemu-nbd not installed"; exit 1; }

# create a 64M SD card image
qemu-img create "$SD_name" 64M

# qemu-nbd -c connect network block device with SD image
# qemu-nbd -d disconnect network block device with SD image
sudo qemu-nbd -c /dev/nbd0 "$SD_name"

# create a single  prtision : nbd0p1
#(echo o;
#echo n; echo p
#echo 1
#echo ; echo
#echo w; echo p) | sudo fdisk /dev/nbd0
sudo fdisk /dev/nbd0

#format to ext4
sudo mkfs.ext4 /dev/nbd0p1

mkdir tmp || true
sudo mount -o user /dev/nbd0p1 tmp/
sudo cp "$UIMG_name" tmp/
sudo mount /dev/nbd0p1
rmdir tmp || true
sudo qemu-nbd -d /dev/nbd0
