	;; Noah French (njf5cu)
	;; Lab 9
	;; 11/14/17
	;; Filename:threexplusone.s
	;; File Description: Collatz Conjecture Step Counter

	;; Optimizations:
	;; I rearranged my code so that the "if odd" section of code came before the "if even" section of code, reducing  branching.
	;; I eliminated redundant code (https://en.wikipedia.org/wiki/Redundant_code) by checking for evenness AND calculating x/2 at the same time.
	
	global threexplusone

	section .txt

threexplusone:
	push rbx
	cmp rdi, 1		; if (x == 1) return!
	je done
	;; Check for evenness:
	push rax		; save rax to the stack, because idiv modifies it
	mov rdx, 0		
	mov rax, rdi
	mov rbx, 2
	idiv rbx      		; quotient of x/2 is in rax. remainder is in rdx
	cmp rdx, 0
	mov rbx, rax		; store quotient in rbx to use in case x is even (don't have to redo the division by 2)
	pop rax			; restore rax
	je even			; if (x % 2) == 0, jump to even
odd:
	imul rdi, 3
	inc rdi
	xor rax, rax		; zero rax to prepare for the routine call
	call threexplusone	; threexplusone(3x+1)
	inc rax			; add one for the step
	jmp done		; skip all that lame even code
even:
	mov rdi, rbx		; x / 2 is currently in rbx; move it to rdi
	xor rax, rax		; zero rax to prepare for the routine call
	call threexplusone	; threexplusone(x/2) 
	inc rax			; add one for the step
done:
	pop rbx
	ret
