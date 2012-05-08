
.globl _start
_start:

/* �ض�λ���� */
/* �ѳ���Ĵ���Ρ����ݶθ��Ƶ��������ӵ�ַȥ */	
	adr r0, _start   /* ���_startָ�ǰ���ڵĵ�ַ : 0*/
	ldr r1, =_start  /* _start�����ӵ�ַ 0x50000000 */
	
	ldr r2, =bss_start      /* bss�ε���ʼ���ӵ�ַ */
	
	cmp r0,r1
	beq clean_bss

copy_loop:
	ldr r3, [r0], #4
	str r3, [r1], #4
	cmp r1, r2
	bne copy_loop

set_stack:
	ldr sp, =0xc1000000

/* ��BSS�ζ�Ӧ���ڴ����� */
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
