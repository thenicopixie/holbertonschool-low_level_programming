section .text
    global main
main:
    mov    rax, 1
    mov    rdi, 1
    mov	   rsi, messag
    mov	   rdx, 17

    syscall
    mov    rax, 60
    xor    rdi, 0
    syscall

section  .data
    message: db "Hello, Hoberton", 10
