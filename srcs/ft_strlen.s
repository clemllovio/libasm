global ft_strlen

section .text
	ft_strlen:
		xor rax, rax

	loop:
		cmp byte [rdi], 0
		jne increment
		jmp end

	increment:
		inc rax
		inc rdi
		jmp loop
	
	end:
		ret