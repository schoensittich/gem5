	.file	"main.c"
	.option nopic
	.attribute arch, "rv32i2p0_m2p0"
	.attribute unaligned_access, 0
	.attribute stack_align, 16
	.text
	.align	2
	.globl	accumulate
	.type	accumulate, @function
accumulate:
	addi	sp,sp,-32
	sw	s0,28(sp)
	addi	s0,sp,32
	sw	a0,-20(s0)
	sw	a1,-24(s0)
	lw	a4,-20(s0)
	lw	a5,-24(s0)
	add	a5,a4,a5
	mv	a0,a5
	lw	s0,28(sp)
	addi	sp,sp,32
	jr	ra
	.size	accumulate, .-accumulate
	.align	2
	.globl	substract
	.type	substract, @function
substract:
	addi	sp,sp,-32
	sw	s0,28(sp)
	addi	s0,sp,32
	sw	a0,-20(s0)
	sw	a1,-24(s0)
	lw	a4,-20(s0)
	lw	a5,-24(s0)
	sub	a5,a4,a5
	mv	a0,a5
	lw	s0,28(sp)
	addi	sp,sp,32
	jr	ra
	.size	substract, .-substract
	.align	2
	.globl	main
	.type	main, @function
main:
	addi	sp,sp,-48
	sw	ra,44(sp)
	sw	s0,40(sp)
	addi	s0,sp,48
	li	a5,20
	sw	a5,-28(s0)
	sw	zero,-20(s0)
	li	a5,1
	sw	a5,-32(s0)
	li	a5,1
	sw	a5,-36(s0)
	sw	zero,-24(s0)
	sw	zero,-20(s0)
	j	.L6
.L9:
	lw	a5,-20(s0)
	andi	a5,a5,1
	beq	a5,zero,.L7
	lw	a1,-36(s0)
	lw	a0,-32(s0)
	call	accumulate
	sw	a0,-24(s0)
	j	.L8
.L7:
	lw	a1,-36(s0)
	lw	a0,-32(s0)
	call	substract
	sw	a0,-24(s0)
.L8:
	lw	a5,-20(s0)
	addi	a5,a5,1
	sw	a5,-20(s0)
.L6:
	lw	a4,-20(s0)
	lw	a5,-28(s0)
	blt	a4,a5,.L9
	lw	a5,-24(s0)
	mv	a0,a5
	lw	ra,44(sp)
	lw	s0,40(sp)
	addi	sp,sp,48
	jr	ra
	.size	main, .-main
	.ident	"GCC: (g5964b5cd727) 11.1.0"
