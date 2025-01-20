global ft_strdup
extern ft_strlen
extern ft_strcpy
extern malloc
extern __errno_location

section .text
	ft_strdup:
 		push rdi
 		call ft_strlen
 		inc rax
		
 		mov rdi, rax
 		call malloc
 		cmp rax, 0
 		je error

 		mov rdi, rax
 		pop rsi
		push rax
 		call ft_strcpy
		pop rax
 		ret

 	error:
		pop rdi
 		call __errno_location
 		mov qword [rax], 12
 		xor rax, rax
 		ret
