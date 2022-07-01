section .data
	msg: DB 'Hello, World', 10
	msgSize: EQU $ - msg

section .text
	global main

main:
	mov rcx, msg
	mov rdx, msgSize
	mov rdi, 1
	mov eax, 4
	int 0x80

	mov eax, 1
	mov rdi, 0
	int 0x80
	ret
