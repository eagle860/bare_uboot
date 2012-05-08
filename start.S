
.globl _start
_start:

/* 重定位代码 */
/* 把程序的代码段、数据段复制到它的链接地址去 */	
	adr r0, _start   /* 获得_start指令当前所在的地址 : 0*/
	ldr r1, =_start  /* _start的链接地址 0x50000000 */
	
	ldr r2, =bss_start      /* bss段的起始链接地址 */
	
	cmp r0,r1
	beq clean_bss

copy_loop:
	ldr r3, [r0], #4
	str r3, [r1], #4
	cmp r1, r2
	bne copy_loop

set_stack:
	ldr sp, =0xc1000000

/* 把BSS段对应的内存清零 */
clean_bss:
	ldr r0, =bss_start
	ldr r1, =bss_end
	mov r3, #0
	cmp r0, r1
	beq on_ddr
clean_loop:
	str r3, [r0], #4
	cmp r0, r1
	bne clean_loop

on_ddr:
	ldr pc, start_main
start_main:
	.word main

