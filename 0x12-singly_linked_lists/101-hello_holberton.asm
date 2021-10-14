		extern	printf
		
		SECTION .data ; data segment

msgfmt:	db "%s", 10, 0
msg: 	db "Hello, Holberton", 0
		
		SECTION .text ; code segment
		
		global main
main:	
		push	rbp

		mov		rdi, msgfmt
		mov		rsi, msg
		mov		rax, 0
		call	printf

		pop		rbp
		mov		rax, 0
		ret
