global ft_strlen

section .text
	ft_strlen:
		xor rax, rax

	loop:
		cmp byte [rdi], 0
		jne increment
		ret

	increment:
		inc rax
		inc rdi
		jmp loop