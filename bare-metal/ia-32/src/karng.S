.section .text
.global karng 
karng:
    mov after, %eax
    mov $1, %eax
    mov $4, %ebx
    mov before(%ebx), %ebx
    int $0x80

.section .before
    before: .long 0

.section .keep, "a"
    keep: .long 1

.section .after
    after: .long 2
    

