#!/bin/sh
qemu-system-arm \
    -kernel ./kernel-qemu-4.4.34-jessie \
    -cpu arm1176 \
    -m 256 \
    -serial stdio \
    -M versatilepb \
    -append 'root=/dev/sda2 rootfstype=ext4 rw' \
    -hda "./2017-04-10-raspbian-jessie.img" \
    -nic "user,hostfwd=tcp::5022-:22" \
    -no-reboot

#    -dtb ../versatile-pb-bullseye-5.10.63.dtb \
