	global ft_strdup

	section .text
	extern  malloc
	extern  __errno_location
len:
	mov rcx, 0
	jmp len_loop
increment:
	inc rcx
	jmp len_loop
len_loop:
	cmp BYTE [rdi + rcx], 0
	jne increment
	mov rsi, rcx
ft_strdup:
	push rdi
	mov  rdi, rsi
	call malloc
	cmp  rax, 0
	je   err
	pop  rdi
	mov  rcx, 0
copy:
	mov dl, [rdi + rcx]
	mov [rax + rcx], dl
	inc rcx
	jmp cpy_loop
cpy_loop:
	cmp BYTE [rdi + rcx], 0
	jne copy
	mov dl, [rdi + rcx]
	mov [rax + rcx], dl
	jmp return
err:
	push rdi
	mov  rdi, rax
	call __errno_location
	mov  [rax], rdi
	pop  rdi
	mov  rax, 0
return:
	ret
