section .text
    global main
main:
    mov     rax, 1
    mov     rdi, 1
    mov	    rsi, message
    mov	    rdx, 17
    syscall
    mov     rax, 60
    xor     rdi, 0
    syscall

section  .data
    messag db		"Hello, Hoberton", 10
