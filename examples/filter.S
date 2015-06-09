	.text
	.globl	filter
	.align	8
filter:                                 # @filter
# BB#0:
	mov	r2, 3239269
	stw	-4(r10), r2
	ldd	r1, 0(r1)
	mov	r2, r10
	addi	r2, -4
	call	3
	mov	r1, r0
	slli	r1, 32
	srli	r1, 32
	mov	r0, 1
	mov	r2, 0
	jeq	r1, r2 goto .LBB0_2
# BB#1:
	mov	r0, r2
.LBB0_2:
	andi	r0, 1
	ret


