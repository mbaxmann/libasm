	global ft_read
	extern __errno_location

	section .text

ft_read:
	mov rax, 0
	syscall
	cmp rax, 0
	jl  erro
	ret
error:
        neg rax
        mov rdi, rax
        push rsi
        call __errno_location
        mov [rax], rdi
        mov rax, -1
        pop rsi
        ret
