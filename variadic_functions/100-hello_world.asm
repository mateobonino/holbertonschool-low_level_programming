global main

section .text:

main:
	mov eax, 0x4
	mov ebx, 1
	mov ecx, message
	mov edx, msg_length
	int 0x80

	mov eax, 0x1
	mov ebx, 0
	int 0x80

section .data:

	message: db "Hello, World", 0xA
	msg_length: equ $ - message
