.text
.balign 4
.global head
head:
	push {r4}
	/* void head(int* arr, int* out, int n); */
	mov r3, #0

	loop:
		cmp r3, r2
		bge end

		ldr r4, [r0,+r3,LSL #2]
		str r4, [r1,+r3,LSL #2]

		add r3, #1
		b loop

end:
	pop {r4}
	bx lr
