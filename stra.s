	.cpu generic+fp+simd
	.file	"stra.c"
	.section	.rodata
	.align	3
.LC0:
	.string	"pcSrc != ((void *)0)"
	.align	3
.LC1:
	.string	"stra.c"
	.text
	.align	2
	.global	Str_getLength
	.type	Str_getLength, %function
Str_getLength:
.LFB0:
	.cfi_startproc
	stp	x29, x30, [sp, -48]!
	.cfi_def_cfa_offset 48
	.cfi_offset 29, -48
	.cfi_offset 30, -40
	add	x29, sp, 0
	.cfi_def_cfa_register 29
	str	x0, [x29,24]
	str	xzr, [x29,40]
	ldr	x0, [x29,24]
	cmp	x0, xzr
	bne	.L2
	adrp	x0, .LC0
	add	x0, x0, :lo12:.LC0
	adrp	x1, .LC1
	add	x1, x1, :lo12:.LC1
	adrp	x2, __PRETTY_FUNCTION__.2490
	add	x3, x2, :lo12:__PRETTY_FUNCTION__.2490
	mov	w2, 11
	bl	__assert_fail
.L2:
	b	.L3
.L4:
	ldr	x0, [x29,40]
	add	x0, x0, 1
	str	x0, [x29,40]
.L3:
	ldr	x1, [x29,24]
	ldr	x0, [x29,40]
	add	x0, x1, x0
	ldrb	w0, [x0]
	cmp	w0, wzr
	bne	.L4
	ldr	x0, [x29,40]
	ldp	x29, x30, [sp], 48
	.cfi_restore 30
	.cfi_restore 29
	.cfi_def_cfa 31, 0
	ret
	.cfi_endproc
.LFE0:
	.size	Str_getLength, .-Str_getLength
	.section	.rodata
	.align	3
.LC2:
	.string	"dest != ((void *)0)"
	.text
	.align	2
	.global	Str_copy
	.type	Str_copy, %function
Str_copy:
.LFB1:
	.cfi_startproc
	stp	x29, x30, [sp, -48]!
	.cfi_def_cfa_offset 48
	.cfi_offset 29, -48
	.cfi_offset 30, -40
	add	x29, sp, 0
	.cfi_def_cfa_register 29
	str	x0, [x29,24]
	str	x1, [x29,16]
	ldr	x0, [x29,24]
	cmp	x0, xzr
	bne	.L7
	adrp	x0, .LC2
	add	x0, x0, :lo12:.LC2
	adrp	x1, .LC1
	add	x1, x1, :lo12:.LC1
	adrp	x2, __PRETTY_FUNCTION__.2500
	add	x3, x2, :lo12:__PRETTY_FUNCTION__.2500
	mov	w2, 21
	bl	__assert_fail
.L7:
	ldr	x0, [x29,16]
	cmp	x0, xzr
	bne	.L8
	adrp	x0, .LC0
	add	x0, x0, :lo12:.LC0
	adrp	x1, .LC1
	add	x1, x1, :lo12:.LC1
	adrp	x2, __PRETTY_FUNCTION__.2500
	add	x3, x2, :lo12:__PRETTY_FUNCTION__.2500
	mov	w2, 22
	bl	__assert_fail
.L8:
	ldr	x0, [x29,16]
	bl	Str_getLength
	str	x0, [x29,32]
	str	xzr, [x29,40]
	b	.L9
.L10:
	ldr	x1, [x29,24]
	ldr	x0, [x29,40]
	add	x0, x1, x0
	ldr	x2, [x29,16]
	ldr	x1, [x29,40]
	add	x1, x2, x1
	ldrb	w1, [x1]
	strb	w1, [x0]
	ldr	x0, [x29,40]
	add	x0, x0, 1
	str	x0, [x29,40]
.L9:
	ldr	x1, [x29,40]
	ldr	x0, [x29,32]
	cmp	x1, x0
	bls	.L10
	ldr	x0, [x29,24]
	ldp	x29, x30, [sp], 48
	.cfi_restore 30
	.cfi_restore 29
	.cfi_def_cfa 31, 0
	ret
	.cfi_endproc
.LFE1:
	.size	Str_copy, .-Str_copy
	.section	.rodata
	.align	3
.LC3:
	.string	"pcSrc1 != ((void *)0)"
	.align	3
.LC4:
	.string	"pcSrc2 != ((void *)0)"
	.text
	.align	2
	.global	Str_concat
	.type	Str_concat, %function
Str_concat:
.LFB2:
	.cfi_startproc
	stp	x29, x30, [sp, -64]!
	.cfi_def_cfa_offset 64
	.cfi_offset 29, -64
	.cfi_offset 30, -56
	add	x29, sp, 0
	.cfi_def_cfa_register 29
	str	x0, [x29,24]
	str	x1, [x29,16]
	ldr	x0, [x29,24]
	cmp	x0, xzr
	bne	.L13
	adrp	x0, .LC3
	add	x0, x0, :lo12:.LC3
	adrp	x1, .LC1
	add	x1, x1, :lo12:.LC1
	adrp	x2, __PRETTY_FUNCTION__.2511
	add	x3, x2, :lo12:__PRETTY_FUNCTION__.2511
	mov	w2, 37
	bl	__assert_fail
.L13:
	ldr	x0, [x29,16]
	cmp	x0, xzr
	bne	.L14
	adrp	x0, .LC4
	add	x0, x0, :lo12:.LC4
	adrp	x1, .LC1
	add	x1, x1, :lo12:.LC1
	adrp	x2, __PRETTY_FUNCTION__.2511
	add	x3, x2, :lo12:__PRETTY_FUNCTION__.2511
	mov	w2, 38
	bl	__assert_fail
.L14:
	ldr	x0, [x29,24]
	bl	Str_getLength
	str	x0, [x29,48]
	ldr	x0, [x29,16]
	bl	Str_getLength
	str	x0, [x29,40]
	str	xzr, [x29,56]
	b	.L15
.L16:
	ldr	x1, [x29,48]
	ldr	x0, [x29,56]
	add	x0, x1, x0
	ldr	x1, [x29,24]
	add	x0, x1, x0
	ldr	x2, [x29,16]
	ldr	x1, [x29,56]
	add	x1, x2, x1
	ldrb	w1, [x1]
	strb	w1, [x0]
	ldr	x0, [x29,56]
	add	x0, x0, 1
	str	x0, [x29,56]
.L15:
	ldr	x1, [x29,56]
	ldr	x0, [x29,40]
	cmp	x1, x0
	bls	.L16
	ldr	x0, [x29,24]
	ldp	x29, x30, [sp], 64
	.cfi_restore 30
	.cfi_restore 29
	.cfi_def_cfa 31, 0
	ret
	.cfi_endproc
.LFE2:
	.size	Str_concat, .-Str_concat
	.align	2
	.global	Str_compare
	.type	Str_compare, %function
Str_compare:
.LFB3:
	.cfi_startproc
	stp	x29, x30, [sp, -48]!
	.cfi_def_cfa_offset 48
	.cfi_offset 29, -48
	.cfi_offset 30, -40
	add	x29, sp, 0
	.cfi_def_cfa_register 29
	str	x0, [x29,24]
	str	x1, [x29,16]
	ldr	x0, [x29,24]
	cmp	x0, xzr
	bne	.L19
	adrp	x0, .LC3
	add	x0, x0, :lo12:.LC3
	adrp	x1, .LC1
	add	x1, x1, :lo12:.LC1
	adrp	x2, __PRETTY_FUNCTION__.2520
	add	x3, x2, :lo12:__PRETTY_FUNCTION__.2520
	mov	w2, 52
	bl	__assert_fail
.L19:
	ldr	x0, [x29,16]
	cmp	x0, xzr
	bne	.L20
	adrp	x0, .LC4
	add	x0, x0, :lo12:.LC4
	adrp	x1, .LC1
	add	x1, x1, :lo12:.LC1
	adrp	x2, __PRETTY_FUNCTION__.2520
	add	x3, x2, :lo12:__PRETTY_FUNCTION__.2520
	mov	w2, 53
	bl	__assert_fail
.L20:
	str	xzr, [x29,40]
	b	.L21
.L24:
	ldr	x1, [x29,24]
	ldr	x0, [x29,40]
	add	x0, x1, x0
	ldrb	w0, [x0]
	cmp	w0, wzr
	bne	.L22
	mov	w0, 0
	b	.L23
.L22:
	ldr	x0, [x29,40]
	add	x0, x0, 1
	str	x0, [x29,40]
.L21:
	ldr	x1, [x29,24]
	ldr	x0, [x29,40]
	add	x0, x1, x0
	ldrb	w1, [x0]
	ldr	x2, [x29,16]
	ldr	x0, [x29,40]
	add	x0, x2, x0
	ldrb	w0, [x0]
	cmp	w1, w0
	beq	.L24
	ldr	x1, [x29,24]
	ldr	x0, [x29,40]
	add	x0, x1, x0
	ldrb	w0, [x0]
	mov	w1, w0
	ldr	x2, [x29,16]
	ldr	x0, [x29,40]
	add	x0, x2, x0
	ldrb	w0, [x0]
	sub	w0, w1, w0
.L23:
	ldp	x29, x30, [sp], 48
	.cfi_restore 30
	.cfi_restore 29
	.cfi_def_cfa 31, 0
	ret
	.cfi_endproc
.LFE3:
	.size	Str_compare, .-Str_compare
	.align	2
	.global	Str_search
	.type	Str_search, %function
Str_search:
.LFB4:
	.cfi_startproc
	stp	x29, x30, [sp, -64]!
	.cfi_def_cfa_offset 64
	.cfi_offset 29, -64
	.cfi_offset 30, -56
	add	x29, sp, 0
	.cfi_def_cfa_register 29
	str	x0, [x29,24]
	str	x1, [x29,16]
	ldr	x0, [x29,24]
	cmp	x0, xzr
	bne	.L26
	adrp	x0, .LC3
	add	x0, x0, :lo12:.LC3
	adrp	x1, .LC1
	add	x1, x1, :lo12:.LC1
	adrp	x2, __PRETTY_FUNCTION__.2532
	add	x3, x2, :lo12:__PRETTY_FUNCTION__.2532
	mov	w2, 68
	bl	__assert_fail
.L26:
	ldr	x0, [x29,16]
	cmp	x0, xzr
	bne	.L27
	adrp	x0, .LC4
	add	x0, x0, :lo12:.LC4
	adrp	x1, .LC1
	add	x1, x1, :lo12:.LC1
	adrp	x2, __PRETTY_FUNCTION__.2532
	add	x3, x2, :lo12:__PRETTY_FUNCTION__.2532
	mov	w2, 69
	bl	__assert_fail
.L27:
	ldr	x0, [x29,24]
	bl	Str_getLength
	str	x0, [x29,40]
	ldr	x0, [x29,16]
	bl	Str_getLength
	str	x0, [x29,32]
	ldr	x0, [x29,32]
	cmp	x0, xzr
	bne	.L28
	ldr	x0, [x29,24]
	b	.L29
.L28:
	str	xzr, [x29,56]
	b	.L30
.L36:
	ldr	x0, [x29,56]
	str	x0, [x29,48]
	b	.L31
.L34:
	ldr	x1, [x29,24]
	ldr	x0, [x29,48]
	add	x0, x1, x0
	ldrb	w1, [x0]
	ldr	x2, [x29,48]
	ldr	x0, [x29,56]
	sub	x0, x2, x0
	ldr	x2, [x29,16]
	add	x0, x2, x0
	ldrb	w0, [x0]
	cmp	w1, w0
	beq	.L32
	b	.L33
.L32:
	ldr	x0, [x29,48]
	add	x0, x0, 1
	str	x0, [x29,48]
.L31:
	ldr	x1, [x29,56]
	ldr	x0, [x29,32]
	add	x1, x1, x0
	ldr	x0, [x29,48]
	cmp	x1, x0
	bhi	.L34
.L33:
	ldr	x1, [x29,56]
	ldr	x0, [x29,32]
	add	x1, x1, x0
	ldr	x0, [x29,48]
	cmp	x1, x0
	bne	.L35
	ldr	x1, [x29,24]
	ldr	x0, [x29,56]
	add	x0, x1, x0
	b	.L29
.L35:
	ldr	x0, [x29,56]
	add	x0, x0, 1
	str	x0, [x29,56]
.L30:
	ldr	x1, [x29,56]
	ldr	x0, [x29,40]
	cmp	x1, x0
	bcc	.L36
	mov	x0, 0
.L29:
	ldp	x29, x30, [sp], 64
	.cfi_restore 30
	.cfi_restore 29
	.cfi_def_cfa 31, 0
	ret
	.cfi_endproc
.LFE4:
	.size	Str_search, .-Str_search
	.section	.rodata
	.align	3
	.type	__PRETTY_FUNCTION__.2490, %object
	.size	__PRETTY_FUNCTION__.2490, 14
__PRETTY_FUNCTION__.2490:
	.string	"Str_getLength"
	.align	3
	.type	__PRETTY_FUNCTION__.2500, %object
	.size	__PRETTY_FUNCTION__.2500, 9
__PRETTY_FUNCTION__.2500:
	.string	"Str_copy"
	.align	3
	.type	__PRETTY_FUNCTION__.2511, %object
	.size	__PRETTY_FUNCTION__.2511, 11
__PRETTY_FUNCTION__.2511:
	.string	"Str_concat"
	.align	3
	.type	__PRETTY_FUNCTION__.2520, %object
	.size	__PRETTY_FUNCTION__.2520, 12
__PRETTY_FUNCTION__.2520:
	.string	"Str_compare"
	.align	3
	.type	__PRETTY_FUNCTION__.2532, %object
	.size	__PRETTY_FUNCTION__.2532, 11
__PRETTY_FUNCTION__.2532:
	.string	"Str_search"
	.ident	"GCC: (GNU) 4.8.5 20150623 (Red Hat 4.8.5-28)"
	.section	.note.GNU-stack,"",%progbits
