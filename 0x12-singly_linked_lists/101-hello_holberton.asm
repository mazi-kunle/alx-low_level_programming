.LC0:

        .ascii "Hello, Holberton\0"

main:

        push    rbp

        mov     rbp, rsp

        mov     edi, OFFSET FLAT:.LC0

        call    puts

        mov     eax, 0

        pop     rbp

        ret
