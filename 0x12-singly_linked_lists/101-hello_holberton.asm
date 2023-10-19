section .data
hello db "Hello, Holberton",0

section .text
global main

main:
; Write the string to stdout (file descriptor 1)
mov rax, 1           ; syscall number for sys_write
mov rdi, 1           ; file descriptor 1 (stdout)
mov rsi, hello       ; pointer to the string
mov rdx, 16          ; length of the string
syscall

; Exit the program
mov rax, 60          ; syscall number for sys_exit
xor rdi, rdi         ; status = 0
syscall

