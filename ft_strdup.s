	global ft_strdup

	section .text
	extern  malloc
	extern  ft_strlen
	extern  ft_strcpy
	extern  __errno_location
ft_strdup:
	push rdi
	call ft_strlen
	inc  rax
	mov  rdi, rax
	call malloc
	cmp  rax, 0
	je   err
	pop  rdi
	mov  rsi, rdi
	mov  rdi, rax
	call ft_strcpy
	jmp  return
err:
	mov  rdi, rax
	push rsi
	call __errno_location
	mov  [rax], rdi
	pop  rdi
	mov  rax, 0
	pop  rsi
return:
	ret
