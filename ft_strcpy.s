	global ft_strcpy

	section .text

ft_strcpy:
	mov rcx, 0
	mov rdx, 0
	jmp loop
copy:
	mov dl, [rsi + rcx]
	mov [rdi + rcx], dl
	inc rcx
	jmp loop
loop:
	cmp BYTE [rsi + rcx], 0
	jne copy
	mov dl, [rsi + rcx]
	mov [rdi + rcx], dl
	mov rax, rdi
	ret
