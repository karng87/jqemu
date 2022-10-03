qemu-system-arm \
    -M raspi2b \
    -kernel b/kernel8.img \
    -drive "format=raw,file=arch.img" \
    -append "console=ttyAMA0 root=/dev/mmcblk0p2 rw rootwait" \
    -dtb b/bcm2711-rpi-4-b.dtb \
    -serial stdio \
    -display none
