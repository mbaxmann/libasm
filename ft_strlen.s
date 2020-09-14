	global ft_strlen

	section .text

ft_strlen:
	mov rcx, 0
	jmp loop
increment:
	inc rcx
	jmp loop
loop:
	cmp BYTE [rdi + rcx], 0
	jne increment
	mov rax, rcx
	ret
