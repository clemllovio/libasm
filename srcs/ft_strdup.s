global ft_strdup
extern ft_strlen
extern ft_strcpy
extern malloc
extern __errno_location

section .text
	ft_strdup:
		call ft_strlen
		push rdi
		inc rax
		mov rdi, rax

		call malloc
		cmp rax, 0
		je error

		mov rdi, rax
		pop rsi
		call ft_strcpy
		ret

	error:
		call __errno_location
		mov qword [rax], 12
		xor rax, rax
		ret