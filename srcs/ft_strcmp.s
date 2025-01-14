global ft_strcmp

section .text
	ft_strcmp:
		xor rax, rax
	
	loop:
		mov al, [rdi]
		mov bl, [rsi]
		cmp al, 0
		je end
		cmp bl, 0
		je end
		cmp al, bl
		jne end
		inc rdi
		inc rsi
		jmp loop

	end:
		sub al, bl
		movsx rax, al
		ret