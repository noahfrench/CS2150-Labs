	;; Product subroutine: Use a loop (no multiplcation function) to return the product of two parameters
	;; Add x (param 1) to rax y (param 2) times
	;; Parameter 1 (in rdi) is 64-bit long x
	;; Parameter 2 (in rsi) is 64-bit long y
	
	global product

	section .text
	
product:
	;; Prologue: not necessary!
	;; Body:
	xor	rax, rax	; zero the return register just in case
	xor	r10, r10	; zero out the counter i
start:	
	cmp	r10, rsi	; does i == y?
	je	done		; if it does, break out of the loop
	add	rax, rdi	; add x to rax
	inc	r10		; increment the counter i
	jmp	start		; go through the loop again!
done:
	;; Epilogue:
	ret

	;; Power subroutine: Use recursion to return x (param 1) to the power of y (param 2)
	;; 
	;; Parameter 1 (in rdi) is 64-bit long x. it is the base
	;; Parameter 2 (in rsi) is 64-bit long y. it is the exponent

	global power

	section .txt

power:
	;; Prologue:
	mov	r11, rsi	; store y in r11
	sub	r11, 1
	mov	rsi, rdi	; store x in rsi (now rdi and rsi are both x)
	;; Body:
	xor	rax, rax	; zero the return register
	xor	r10, r10	; zero the counter j
start2:
	cmp	r10, r11	; does j == y?
	je	done		; if it does, you're done
	push	r10 		; save j to the stack
	call	product		; multiply rdi and rsi
	pop	r10		; pop j back into r10
	mov	rdi, rax	; Put the product (thus far) into rdi
	inc	r10 		; increment the counter j
	jmp	start2 		; go through the loop again!
done2:
	;; Epilogue:
	ret
	
