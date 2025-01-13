global ft_strcpy

section .text
	ft_strcpy:
		loop:
			cmp byte [rsi], 0
			jne copy
			jmp end

		copy:
			mov al, [rsi]
			mov [rdi], al
			inc rsi
			inc rdi
			jmp loop
		
		end:
			mov byte [rdi], 0
			ret