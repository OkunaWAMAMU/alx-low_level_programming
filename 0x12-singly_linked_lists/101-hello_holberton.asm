section .data
    hello db "Hello, Holberton",10,0 ; The message to print (with a newline character and null terminator)

section .text
    global main

extern printf

main:
    push rbp
    mov rdi, hello
    call printf
    pop rbp

    ; Exit the program
    mov rax, 60  ; syscall number for exit
    xor rdi, rdi ; status = 0
    syscall
