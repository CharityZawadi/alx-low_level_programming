section .data
hello db "Hello, Holberton", 10  ; The string with a newline (ASCII value 10)

section .text
global main

main:
; Write the string to stdout (file descriptor 1)
mov rax, 0x1         ; syscall number for sys_write
mov rdi, 0x1         ; file descriptor 1 (stdout)
mov rsi, hello       ; pointer to the string
mov rdx, 17          ; length of the string, including the newline
syscall

; Exit the program
mov rax, 60          ; syscall number for sys_exit
xor rdi, rdi         ; status = 0
syscall

