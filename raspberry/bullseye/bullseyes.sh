#!/bin/sh
qemu-system-arm \
    -M versatilepb \
    -cpu arm1176 \
    -m 256 \
    -drive "file=../2022-09-22-raspios-bullseye-arm64.img,if=none,media=disk,format=raw,id=disk0" \
    -device "virtio-blk-pci,drive=disk0,disable-modern=on,disable-legacy=off" \
    -net "user,hostfwd=tcp::5022-:22" \
    -dtb ../versatile-pb-bullseye-5.10.63.dtb \
    -kernel ../kernel-qemu-5.10.63-bullseye \
    -append 'root=/dev/vda2 panic=1' \
    -no-reboot \
    -serial stdio
