section .data
hello db "Hello, Holberton",10

section .text
global main

main:
; Write the string to stdout (file descriptor 1)
mov eax, 4           ; syscall number for sys_write
mov ebx, 1           ; file descriptor 1 (stdout)
mov ecx, hello       ; pointer to the string
mov edx, 17          ; length of the string, including the newline
int 0x80             ; interrupt to invoke syscall

; Exit the program
mov eax, 1           ; syscall number for sys_exit
xor ebx, ebx         ; status = 0
int 0x80             ; interrupt to invoke syscall
