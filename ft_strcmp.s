	global ft_strcmp

	section .text

ft_strcmp:
	jmp compare
increment:
	cmp BYTE [rdi], 0
	je  return
	cmp BYTE [rsi], 0
	je return
	inc rdi
	inc rsi
	jmp compare
compare:
	mov rcx, 0
	mov rax, 0
	mov al, [rdi]
	mov cl, [rsi]
	cmp al, cl
	je  increment
return:
	sub rax, rcx
	ret
