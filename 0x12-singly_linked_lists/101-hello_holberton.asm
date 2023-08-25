section .data
    hello db "Hello, Holberton", 10
    format db "%s", 0

section .text
    extern printf

global main
main:
    sub rsp, 8
    mov rdi, format
    mov rsi, hello
    xor eax, eax
    call printf
    add rsp, 8

    mov eax, 0x60  ; exit system call
    xor edi, edi   ; exit code 0
    syscall

