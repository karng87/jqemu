#!/usr/bin/env bash

echo
echo "Arch Linux in QEMU with love from eirikb"
echo
set -x

#TARGET=ArchLinuxARM-rpi-2-latest.tar.gz
TARGET=ArchLinuxARM-rpi-aarch64-latest.tar.gz

wget "http://os.archlinuxarm.org/os/$TARGET"

qemu-img create arch.img 32G
fdisk arch.img <<EOF
n



+200M
t
c
n




w
EOF

LOOPS=$(sudo kpartx -av arch.img | grep -Po 'loop.p.')
BOOT=$(echo "$LOOPS" | head -n1)
ROOT=$(echo "$LOOPS" | tail -n1)

sudo mkfs.vfat /dev/mapper/"$BOOT"
sudo mkfs.ext4 /dev/mapper/"$ROOT"

sudo rm -rf boot root b
mkdir boot root b

sudo mount /dev/mapper/"$BOOT" boot
sudo mount /dev/mapper/"$ROOT" root

sudo bsdtar -xpf "$TARGET" -C root
sudo sync

sudo mv root/boot/* boot
sudo cp -r boot/* b/
sudo umount boot root
sudo kpartx -d arch.img
sudo rm -rf root boot


echo 'qemu-system-arm \
    -M raspi2 \
    -kernel b/kernel7.img \
    -drive "format=raw,file=arch.img" \
    -append "console=ttyAMA0 root=/dev/mmcblk0p2 rw rootwait" \
    -dtb b/bcm2709-rpi-2-b.dtb \
    -serial stdio \
    -display none' > boot.sh

# How I think it works, people please correct me if I'm wrong, I don't know much about this:

#    -M raspi2: 
#      QEMU has a 'machine' raspi2, this will set up correct hardware on correct locations/buses (network, usb etc.)
#    -kernel b/kernel7.img: 
#      Even though kernel is located on the disk QEMU must load it from outside the guest (from host).
#      Raspberry has a two-stage bootloader, where the first bootloader is on-board (hardware).
#      QEMU doesn't have this, and therefore can't simply kick start the second stage (called bootcode.bin).
#      Instead kernel is loaded and run from outside, and no bootloader is used at all.

#    -append "console=ttyAMA0 root=/dev/mmcblk0p2 rootwait":
#      Append flags for kernel, these will be passed to the preivously loaded kernel.
#      console=ttyAMA0 is used for virtual console, this makes QEMU able to print and read to/from stdio.
#      root is where the kernel can find the root disk. I'm not sure about the path, it seems wrong to me.
#      For the first I don't usee -sd (see below) so I expected /dev/sda, not /dev/mmcblk0p2.
#      Secondly I expected this path to be hard coded as default in the kernel (that's the sd card path on rpi).
#      rootwait does this: https://unix.stackexchange.com/a/636509 . Basically wait for rootfs to be available.
#      Without number provided it probably do polling. Not 100% why this is required, beside the obivous that rootfs isn't availalbe at correct time.
#
#    -dtb b/bcm2709-rpi-2-b.dtb:
#      Set device tree binary. This is a file describing where devices are located for the kernel. Devices on rpi are non-discoverable, and the same
#      kernel supports multiple (all) versions of raspberry. I'm not sure if QEMU uses this internally, beside passing it to kernel, in theory it should be enough with -M raspi2.
#      An alternative is to have a kernel with this built into the kernel. I believe some OSes do this. archisoarm, at least for rpi, have these available for multiple rpi versions.
#      Tip: You can see them by "ls b" after running this script.
#
#    -drive "format=raw,file=arch.img":
#      Tell QEMU about where the disk is. This disk will be created by this script. Used -drive instead of -sd in order to remove the warning about "raw" format.
#
#    -serial stdio -display none: 
#     Make QEMU use terminal for input/output. Note ctrl+c closes. Change this as needed

set +x
echo
echo 'All is well. To run: sh boot.sh. Give it some seconds'
