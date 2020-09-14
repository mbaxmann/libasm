	global ft_strcmp

	section .text

ft_strcmp:
	mov rcx, 0
	mov rdx, 0
	jmp compare
increment:
	cmp BYTE [rdi + rcx], 0
	je  return
	cmp BYTE [rsi + rcx], 0
	je return
	inc rcx
	jmp compare
less:
	mov rax, -1
	ret
greater:
	mov rax, 1
	ret
compare:
	mov dl, [rdi + rcx]
	cmp BYTE dl, [rsi + rcx]
	je  increment
return:
	mov dl, [rdi + rcx]
	cmp BYTE dl, [rsi + rcx]
	jl  less
	mov dl, [rdi + rcx]
	cmp BYTE dl, [rsi + rcx]
	jg  greater
	mov rax, 0
	ret
