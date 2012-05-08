#ifndef _OK6410_H
#define _OK6410_H


/*=======================================================
**	����ַ�Ķ���
=========================================================*/
#define	AHB_BASE		(0x7F000000)

/******************************************************************
**  GPX�ĵ�ַ����
*******************************************************************/
#define	GPX_BASE		(AHB_BASE+0x08000)

/******************************************************************
**		GPA�Ĵ�����ַ����
*******************************************************************/
#define	GPACON			(*(volatile unsigned long *)(GPX_BASE + 0x0000))
#define	GPADAT			(*(volatile unsigned long *)(GPX_BASE + 0x0004))
#define	GPAPUD			(*(volatile unsigned long *)(GPX_BASE + 0x0008))
#define	GPACONSLP		(*(volatile unsigned long *)(GPX_BASE + 0x000C))
#define	GPAPUDSLP		(*(volatile unsigned long *)(GPX_BASE + 0x0010))

/******************************************************************
**		GPB�Ĵ�����ַ����
******************************************************************/
#define	GPBCON			(*(volatile unsigned long *)(GPX_BASE + 0x0020))
#define	GPBDAT			(*(volatile unsigned long *)(GPX_BASE + 0x0024))
#define	GPBPUD			(*(volatile unsigned long *)(GPX_BASE + 0x0028))
#define	GPBCONSLP		(*(volatile unsigned long *)(GPX_BASE + 0x002C))
#define	GPBPUDSLP		(*(volatile unsigned long *)(GPX_BASE + 0x0030))

/******************************************************************
**		GPC�Ĵ�����ַ����
******************************************************************/
#define	GPCCON			(*(volatile unsigned long *)(GPX_BASE + 0x0040))
#define	GPCDAT			(*(volatile unsigned long *)(GPX_BASE + 0x0044))
#define	GPCPUD			(*(volatile unsigned long *)(GPX_BASE + 0x0048))
#define	GPCCONSLP		(*(volatile unsigned long *)(GPX_BASE + 0x004C))
#define	GPCPUDSLP		(*(volatile unsigned long *)(GPX_BASE + 0x0050))

/******************************************************************
**		GPD�Ĵ�����ַ����
******************************************************************/
#define	GPDCON			(*(volatile unsigned long *)(GPX_BASE + 0x0060))
#define	GPDDAT			(*(volatile unsigned long *)(GPX_BASE + 0x0064))
#define	GPDPUD			(*(volatile unsigned long *)(GPX_BASE + 0x0068))
#define	GPDCONSLP		(*(volatile unsigned long *)(GPX_BASE + 0x006C))
#define	GPDPUDSLP		(*(volatile unsigned long *)(GPX_BASE + 0x0070))

/******************************************************************
**		GPE�Ĵ�����ַ����
******************************************************************/
#define	GPECON			(*(volatile unsigned long *)(GPX_BASE + 0x0080))
#define	GPEDAT			(*(volatile unsigned long *)(GPX_BASE + 0x0084))
#define	GPEPUD			(*(volatile unsigned long *)(GPX_BASE + 0x0088))
#define	GPECONSLP		(*(volatile unsigned long *)(GPX_BASE + 0x008C))
#define	GPEPUDSLP		(*(volatile unsigned long *)(GPX_BASE + 0x0090))

/******************************************************************
**		GPF�Ĵ�����ַ����
******************************************************************/
#define	GPFCON			(*(volatile unsigned long *)(GPX_BASE + 0x00A0))
#define	GPFDAT			(*(volatile unsigned long *)(GPX_BASE + 0x00A4))
#define	GPFPUD			(*(volatile unsigned long *)(GPX_BASE + 0x00A8))
#define	GPFCONSLP		(*(volatile unsigned long *)(GPX_BASE + 0x00AC))
#define	GPFPUDSLP		(*(volatile unsigned long *)(GPX_BASE + 0x00B0))

/******************************************************************
**		GPG�Ĵ�����ַ����
******************************************************************/
#define	GPGCON			(*(volatile unsigned long *)(GPX_BASE + 0x00C0))
#define	GPGDAT			(*(volatile unsigned long *)(GPX_BASE + 0x00C4))
#define	GPGPUD			(*(volatile unsigned long *)(GPX_BASE + 0x00C8))
#define	GPGCONSLP		(*(volatile unsigned long *)(GPX_BASE + 0x00CC))
#define	GPGPUDSLP		(*(volatile unsigned long *)(GPX_BASE + 0x00D0))

/******************************************************************
**		GPH�Ĵ�����ַ����
******************************************************************/
#define	GPHCON			(*(volatile unsigned long *)(GPX_BASE + 0x00E0))
#define	GPHDAT			(*(volatile unsigned long *)(GPX_BASE + 0x00E4))
#define	GPHPUD			(*(volatile unsigned long *)(GPX_BASE + 0x00E8))
#define	GPHCONSLP		(*(volatile unsigned long *)(GPX_BASE + 0x00EC))
#define	GPHPUDSLP		(*(volatile unsigned long *)(GPX_BASE + 0x00F0))

/******************************************************************
**		GPI�Ĵ�����ַ����
******************************************************************/
#define	GPICON			(*(volatile unsigned long *)(GPX_BASE + 0x0100))
#define	GPIDAT			(*(volatile unsigned long *)(GPX_BASE + 0x0104))
#define	GPIPUD			(*(volatile unsigned long *)(GPX_BASE + 0x0108))
#define	GPICONSLP		(*(volatile unsigned long *)(GPX_BASE + 0x010C))
#define	GPIPUDSLP		(*(volatile unsigned long *)(GPX_BASE + 0x0110))

/******************************************************************
**		GPJ�Ĵ�����ַ����
******************************************************************/
#define	GPJCON			(*(volatile unsigned long *)(GPX_BASE + 0x0120))
#define	GPJDAT			(*(volatile unsigned long *)(GPX_BASE + 0x0124))
#define	GPJPUD			(*(volatile unsigned long *)(GPX_BASE + 0x0128))
#define	GPJCONSLP		(*(volatile unsigned long *)(GPX_BASE + 0x012C))
#define	GPJPUDSLP		(*(volatile unsigned long *)(GPX_BASE + 0x0130))

/******************************************************************
**		GPK�Ĵ�����ַ����
******************************************************************/
#define	GPKCON0			(*(volatile unsigned long *)(GPX_BASE + 0x0800))
#define	GPKCON1			(*(volatile unsigned long *)(GPX_BASE + 0x0804))
#define	GPKDAT			(*(volatile unsigned long *)(GPX_BASE + 0x0808))
#define	GPKPUD			(*(volatile unsigned long *)(GPX_BASE + 0x080C))

/******************************************************************
**		GPL�Ĵ�����ַ����
******************************************************************/
#define	GPLCON0			(*(volatile unsigned long *)(GPX_BASE + 0x0810))
#define	GPLCON1			(*(volatile unsigned long *)(GPX_BASE + 0x0814))
#define	GPLDAT			(*(volatile unsigned long *)(GPX_BASE + 0x0818))
#define	GPLPUD			(*(volatile unsigned long *)(GPX_BASE + 0x081C))

/******************************************************************
**		GPM�Ĵ�����ַ����
******************************************************************/
#define	GPMCON			(*(volatile unsigned long *)(GPX_BASE + 0x0820))
#define	GPMDAT			(*(volatile unsigned long *)(GPX_BASE + 0x0824))
#define	GPMPUD			(*(volatile unsigned long *)(GPX_BASE + 0x0828))

/******************************************************************
**		GPN�Ĵ�����ַ����
******************************************************************/
#define	GPNCON			(*(volatile unsigned long *)(GPX_BASE + 0x0830))
#define	GPNDAT			(*(volatile unsigned long *)(GPX_BASE + 0x0834))
#define	GPNPUD			(*(volatile unsigned long *)(GPX_BASE + 0x0838))

/******************************************************************
**		GPO�Ĵ�����ַ����
******************************************************************/
#define	GPOCON			(*(volatile unsigned long *)(GPX_BASE + 0x0140))
#define	GPODAT			(*(volatile unsigned long *)(GPX_BASE + 0x0144))
#define	GPOPUD			(*(volatile unsigned long *)(GPX_BASE + 0x0148))
#define	GPOCONSLP		(*(volatile unsigned long *)(GPX_BASE + 0x014C))
#define	GPOPUDSLP		(*(volatile unsigned long *)(GPX_BASE + 0x0150))

/******************************************************************
**		GPP�Ĵ�����ַ����
******************************************************************/
#define	GPPCON			(*(volatile unsigned long *)(GPX_BASE + 0x0160))
#define	GPPDAT			(*(volatile unsigned long *)(GPX_BASE + 0x0164))
#define	GPPPUD			(*(volatile unsigned long *)(GPX_BASE + 0x0168))
#define	GPPCONSLP		(*(volatile unsigned long *)(GPX_BASE + 0x016C))
#define	GPPPUDSLP		(*(volatile unsigned long *)(GPX_BASE + 0x0170))

/******************************************************************
**		GPQ�Ĵ�����ַ����
******************************************************************/
#define	GPQCON			(*(volatile unsigned long *)(GPX_BASE + 0x0180))
#define	GPQDAT			(*(volatile unsigned long *)(GPX_BASE + 0x0184))
#define	GPQPUD			(*(volatile unsigned long *)(GPX_BASE + 0x0188))
#define	GPQCONSLP		(*(volatile unsigned long *)(GPX_BASE + 0x018C))
#define	GPQPUDSLP		(*(volatile unsigned long *)(GPX_BASE + 0x0190))


/******************************************************************
**	����˿����üĴ���
*******************************************************************/
//#define	SP_BASE			(AHB_BASE+0x08000)
#define	SPCON			(*(volatile unsigned long *)((AHB_BASE+0x08000) + 0x01A0))
#define	SPCONSLP		(*(volatile unsigned long *)((AHB_BASE+0x08000) + 0x0880))

/*****************************************************************
**	�洢���˿�����
******************************************************************/
//#define	MEM_BASE		(AHB_BASE+0x08000)
#define	MEM0CONSLP0	(*(volatile unsigned long *)((AHB_BASE+0x08000) + 0x01C0))
#define	MEM0CONSLP1	(*(volatile unsigned long *)((AHB_BASE+0x08000) + 0x01C4))
#define	MEM0CONSLP2	(*(volatile unsigned long *)((AHB_BASE+0x08000) + 0x01C8))
#define	MEM0DRVCON		(*(volatile unsigned long *)((AHB_BASE+0x08000) + 0x01D0))
#define	MEM1DRVCON		(*(volatile unsigned long *)((AHB_BASE+0x08000) + 0x01D4))

/*****************************************************************
**	�ⲿ�ж����üĴ�����ַ
******************************************************************/
//#define	EINT_BASE		(AHB_BASE+0x08000)

/* �ⲿ�ж����üĴ���0*/
#define	EINT0CON0		(*(volatile unsigned long *)((AHB_BASE+0x08000) + 0x0900))

/* �ⲿ�ж����üĴ���1*/
#define	EINT0CON1		(*(volatile unsigned long *)((AHB_BASE+0x08000) + 0x0904))

/* �ⲿ�жϹ��˿��ƼĴ���0*/
#define	EINT0FLTCON0	(*(volatile unsigned long *)((AHB_BASE+0x08000) + 0x0910))

/* �ⲿ�жϹ��˿��ƼĴ���1*/
#define	EINT0FLTCON1	(*(volatile unsigned long *)((AHB_BASE+0x08000) + 0x0914))

/* �ⲿ�жϹ��˿��ƼĴ���2*/
#define	EINT0FLTCON2	(*(volatile unsigned long *)((AHB_BASE+0x08000) + 0x0918))

/* �ⲿ�жϹ��˿��ƼĴ���3*/
#define	EINT0FLTCON3	(*(volatile unsigned long *)((AHB_BASE+0x08000) + 0x091C))

/* �ⲿ�ж����μĴ���*/
#define	EINT0MASK		(*(volatile unsigned long *)((AHB_BASE+0x08000) + 0x0920))

/* �ⲿ�ж����ҼĴ���*/
#define	EINT0PEND		(*(volatile unsigned long *)((AHB_BASE+0x08000) + 0x0924))

/* ˯��ģʽ�����üĴ���*/
#define	SLPEN			(*(volatile unsigned long *)((AHB_BASE+0x08000) + 0x0930))

/* �ⲿ�ж�1,2���üĴ���0*/
#define	EINT12CON		(*(volatile unsigned long *)((AHB_BASE+0x08000) + 0x0200))
/* �ⲿ�ж�3,4���üĴ���0*/
#define	EINT34CON		(*(volatile unsigned long *)((AHB_BASE+0x08000) + 0x0204))
/* �ⲿ�ж�5,6���üĴ���0*/
#define	EINT56CON		(*(volatile unsigned long *)((AHB_BASE+0x08000) + 0x0208))
/* �ⲿ�ж�7,8���üĴ���0*/
#define	EINT78CON		(*(volatile unsigned long *)((AHB_BASE+0x08000) + 0x020C))
/* �ⲿ�ж�9���üĴ���0*/
#define	EINT9CON		(*(volatile unsigned long *)((AHB_BASE+0x08000) + 0x0210))

/* �ⲿ�ж�1,2���ƼĴ���0*/
#define	EINT12FLTCON	(*(volatile unsigned long *)((AHB_BASE+0x08000) + 0x0220))
/* �ⲿ�ж�3,4���ƼĴ���0*/
#define	EINT34FLTCON	(*(volatile unsigned long *)((AHB_BASE+0x08000) + 0x0224))
/* �ⲿ�ж�5,6���ƼĴ���0*/
#define	EINT56FLTCON	(*(volatile unsigned long *)((AHB_BASE+0x08000) + 0x0228))
/* �ⲿ�ж�7,8���ƼĴ���0*/
#define	EINT78FLTCON	(*(volatile unsigned long *)((AHB_BASE+0x08000) + 0x022C))
/* �ⲿ�ж�9���ƼĴ���0*/
#define	EINT9FLTCON		(*(volatile unsigned long *)((AHB_BASE+0x08000) + 0x0230))

/* �ⲿ�ж�1,2���μĴ���0*/
#define	EINT12MASK		(*(volatile unsigned long *)((AHB_BASE+0x08000) + 0x0240))
/* �ⲿ�ж�3,4���μĴ���0*/
#define	EINT34MASK		(*(volatile unsigned long *)((AHB_BASE+0x08000) + 0x0244))
/* �ⲿ�ж�5,6���μĴ���0*/
#define	EINT56MASK		(*(volatile unsigned long *)((AHB_BASE+0x08000) + 0x0248))
/* �ⲿ�ж�7,8���μĴ���0*/
#define	EINT78MASK		(*(volatile unsigned long *)((AHB_BASE+0x08000) + 0x024C))
/* �ⲿ�ж�9���μĴ���0*/
#define	EINT9MASK		(*(volatile unsigned long *)((AHB_BASE+0x08000) + 0x0250))

/* �ⲿ�ж�1,2���ҼĴ���0*/
#define	EINT12PEND		(*(volatile unsigned long *)((AHB_BASE+0x08000) + 0x0260))
/* �ⲿ�ж�3,4���ҼĴ���0*/
#define	EINT34PEND		(*(volatile unsigned long *)((AHB_BASE+0x08000) + 0x0264))
/* �ⲿ�ж�5,6���ҼĴ���0*/
#define	EINT56PEND		(*(volatile unsigned long *)((AHB_BASE+0x08000) + 0x0268))
/* �ⲿ�ж�7,8���ҼĴ���0*/
#define	EINT78PEND		(*(volatile unsigned long *)((AHB_BASE+0x08000) + 0x026C))
/* �ⲿ�ж�9���ҼĴ���0*/
#define	EINT9PEND		(*(volatile unsigned long *)((AHB_BASE+0x08000) + 0x0260))

/******************************************************************
**	���ȼ����ƼĴ���
*******************************************************************/
//#define	PRIO_BASE		(AHB_BASE+0x08000)
#define	PRIORITY		(*(volatile unsigned long *)((AHB_BASE+0x08000) + 0x0280))


/******************************************************************
**	��ǰ����Ĵ���
*******************************************************************/
//#define	SER_BASE		(AHB_BASE+0x08000)
#define	SERVICE			(*(volatile unsigned long *)((AHB_BASE+0x08000) + 0x0284))
#define	SERVICEPEND		(*(volatile unsigned long *)((AHB_BASE+0x08000) + 0x0288))


/*=======================================================
**	UART�Ĵ�����ַ
=======================================================*/
#define	UART_BASE		(AHB_BASE+0x05000)

/*                                  UARTͨ��0                                                                              */

/*UARTͨ��0�п��ƼĴ���*/
#define	ULCON0			(*(volatile unsigned long *)(UART_BASE + 0x0000))
/*UARTͨ��0���ƼĴ���*/
#define	UCON0			(*(volatile unsigned long *)(UART_BASE + 0x0004))
/*UARTͨ��0FIFO���ƼĴ���*/
#define	UFCON0			(*(volatile unsigned long *)(UART_BASE + 0x0008))
/*UARTͨ��0���ƽ�������ƼĴ���*/
#define	UMCON0			(*(volatile unsigned long *)(UART_BASE + 0x000C))

/*UARTͨ��0����/����״̬�Ĵ���*/
#define	UTRSTAT0		(*(volatile unsigned long *)(UART_BASE + 0x0010))
/*UARTͨ��0���մ���״̬�Ĵ���*/
#define	UERSTAT0		(*(volatile unsigned long *)(UART_BASE + 0x0014))
/*UARTͨ��0FIFO״̬�Ĵ���*/
#define	UFSTAT0			(*(volatile unsigned long *)(UART_BASE + 0x0018))
/*UARTͨ��0���ƽ����״̬�Ĵ���*/
#define	UMSTAT0			(*(volatile unsigned long *)(UART_BASE + 0x001C))

/*UARTͨ��0���ͻ���Ĵ���*/
#define	UTXH0			(*(volatile unsigned long *)(UART_BASE + 0x0020))
/*UARTͨ��0���ջ���Ĵ���*/
#define	URXH0			(*(volatile unsigned long *)(UART_BASE + 0x0024))
/*UARTͨ��0�����ʷ�Ƶ�Ĵ���*/
#define	UBRDIV0			(*(volatile unsigned long *)(UART_BASE + 0x0028))
/*UARTͨ��0��Ƶ��ۼĴ���*/
#define	UDIVSLOT0		(*(volatile unsigned long *)(UART_BASE + 0x002C))
/*UARTͨ��0�жϴ���Ĵ���*/
#define	UINTP0			(*(volatile unsigned long *)(UART_BASE + 0x0030))
/*UARTͨ��0�ж�Դ����Ĵ���*/
#define	UINTSP0			(*(volatile unsigned long *)(UART_BASE + 0x0034))
/*UARTͨ��0�ж����μĴ���*/
#define	UINTM0			(*(volatile unsigned long *)(UART_BASE + 0x0038))


/*                                  UARTͨ��1                                                                          */

/*UARTͨ��1�п��ƼĴ���*/
#define	ULCON1			(*(volatile unsigned long *)(UART_BASE + 0x0400))
/*UARTͨ��1���ƼĴ���*/
#define	UCON1			(*(volatile unsigned long *)(UART_BASE + 0x0404))
/*UARTͨ��1FIFO���ƼĴ���*/
#define	UFCON1			(*(volatile unsigned long *)(UART_BASE + 0x0408))
/*UARTͨ��1���ƽ�������ƼĴ���*/
#define	UMCON1		    	(*(volatile unsigned long *)(UART_BASE + 0x040C))

/*UARTͨ��1����/����״̬�Ĵ���*/
#define	UTRSTAT1		(*(volatile unsigned long *)(UART_BASE + 0x0410))
/*UARTͨ��1���մ���״̬�Ĵ���*/
#define	UERSTAT1		(*(volatile unsigned long *)(UART_BASE + 0x0414))
/*UARTͨ��1FIFO״̬�Ĵ���*/
#define	UFSTAT1			(*(volatile unsigned long *)(UART_BASE + 0x0418))
/*UARTͨ��1���ƽ����״̬�Ĵ���*/
#define	UMSTAT1			(*(volatile unsigned long *)(UART_BASE + 0x041C))

/*UARTͨ��1���ͻ���Ĵ���*/
#define	UTXH1			(*(volatile unsigned long *)(UART_BASE + 0x0420))
/*UARTͨ��1���ջ���Ĵ���*/
#define	URXH1			(*(volatile unsigned long *)(UART_BASE + 0x0424))
/*UARTͨ��1�����ʷ�Ƶ�Ĵ���*/
#define	UBRDIV1			(*(volatile unsigned long *)(UART_BASE + 0x0428))
/*UARTͨ��1��Ƶ��ۼĴ���*/
#define	UDIVSLOT1		(*(volatile unsigned long *)(UART_BASE + 0x042C))
/*UARTͨ��1�жϴ���Ĵ���*/
#define	UINTP1			(*(volatile unsigned long *)(UART_BASE + 0x0430))
/*UARTͨ��1�ж�Դ����Ĵ���*/
#define	UINTSP1			(*(volatile unsigned long *)(UART_BASE + 0x0434))
/*UARTͨ��1�ж����μĴ���*/
#define	UINTM1			(*(volatile unsigned long *)(UART_BASE + 0x0438))


/*                                  UARTͨ��2                                                                                 */

/*UARTͨ��2�п��ƼĴ���*/
#define	ULCON2			(*(volatile unsigned long *)(UART_BASE + 0x0800))
/*UARTͨ��2���ƼĴ���*/
#define	UCON2			(*(volatile unsigned long *)(UART_BASE + 0x0804))
/*UARTͨ��2FIFO���ƼĴ���*/
#define	UFCON2			(*(volatile unsigned long *)(UART_BASE + 0x0808))
/*UARTͨ��2���ƽ�������ƼĴ���*/
#define	UMCON2		    	(*(volatile unsigned long *)(UART_BASE + 0x080C))

/*UARTͨ��2����/����״̬�Ĵ���*/
#define	UTRSTAT2		(*(volatile unsigned long *)(UART_BASE + 0x0810))
/*UARTͨ��2���մ���״̬�Ĵ���*/
#define	UERSTAT2		(*(volatile unsigned long *)(UART_BASE + 0x0814))
/*UARTͨ��2FIFO״̬�Ĵ���*/
#define	UFSTAT2			(*(volatile unsigned long *)(UART_BASE + 0x0818))
/*UARTͨ��2���ƽ����״̬�Ĵ���*/
#define	UMSTAT2			(*(volatile unsigned long *)(UART_BASE + 0x081C))

/*UARTͨ��2���ͻ���Ĵ���*/
#define	UTXH2			(*(volatile unsigned long *)(UART_BASE + 0x0820))
/*UARTͨ��2���ջ���Ĵ���*/
#define	URXH2			(*(volatile unsigned long *)(UART_BASE + 0x0824))
/*UARTͨ��2�����ʷ�Ƶ�Ĵ���*/
#define	UBRDIV2			(*(volatile unsigned long *)(UART_BASE + 0x0828))
/*UARTͨ��2��Ƶ��ۼĴ���*/
#define	UDIVSLOT2		(*(volatile unsigned long *)(UART_BASE + 0x082C))
/*UARTͨ��2�жϴ���Ĵ���*/
#define	UINTP2			(*(volatile unsigned long *)(UART_BASE + 0x0830))
/*UARTͨ��2�ж�Դ����Ĵ���*/
#define	UINTSP2			(*(volatile unsigned long *)(UART_BASE + 0x0834))
/*UARTͨ��2�ж����μĴ���*/
#define	UINTM2			(*(volatile unsigned long *)(UART_BASE + 0x0838))


/*                                  UARTͨ��3                                                                            */

/*UARTͨ��3�п��ƼĴ���*/
#define	ULCON3			(*(volatile unsigned long *)(UART_BASE + 0x0C00))
/*UARTͨ��3���ƼĴ���*/
#define	UCON3			(*(volatile unsigned long *)(UART_BASE + 0x0C04))
/*UARTͨ��3FIFO���ƼĴ���*/
#define	UFCON3			(*(volatile unsigned long *)(UART_BASE + 0x0C08))
/*UARTͨ��3���ƽ�������ƼĴ���*/
#define	UMCON3		    	(*(volatile unsigned long *)(UART_BASE + 0x0C0C))

/*UARTͨ��3����/����״̬�Ĵ���*/
#define	UTRSTAT3		(*(volatile unsigned long *)(UART_BASE + 0x0C10))
/*UARTͨ��3���մ���״̬�Ĵ���*/
#define	UERSTAT3		(*(volatile unsigned long *)(UART_BASE + 0x0C14))
/*UARTͨ��3FIFO״̬�Ĵ���*/
#define	UFSTAT3			(*(volatile unsigned long *)(UART_BASE + 0x0C18))
/*UARTͨ��3���ƽ����״̬�Ĵ���*/
#define	UMSTAT3			(*(volatile unsigned long *)(UART_BASE + 0x0C1C))

/*UARTͨ��3���ͻ���Ĵ���*/
#define	UTXH3			(*(volatile unsigned long *)(UART_BASE + 0x0C20))
/*UARTͨ��3���ջ���Ĵ���*/
#define	URXH3			(*(volatile unsigned long *)(UART_BASE + 0x0C24))
/*UARTͨ��3�����ʷ�Ƶ�Ĵ���*/
#define	UBRDIV3			(*(volatile unsigned long *)(UART_BASE + 0x0C28))
/*UARTͨ��3��Ƶ��ۼĴ���*/
#define	UDIVSLOT3		(*(volatile unsigned long *)(UART_BASE + 0x0C2C))
/*UARTͨ��3�жϴ���Ĵ���*/
#define	UINTP3			(*(volatile unsigned long *)(UART_BASE + 0x0C30))
/*UARTͨ��3�ж�Դ����Ĵ���*/
#define	UINTSP3			(*(volatile unsigned long *)(UART_BASE + 0x0C34))
/*UARTͨ��3�ж����μĴ���*/
#define	UINTM3			(*(volatile unsigned long *)(UART_BASE + 0x0C38))





/*=======================================================
**	���⹦�ܼĴ�����ַ
========================================================*/

#define	SFR_BASE			(0X7E000000)

/*****************************************************************
**	ϵͳ������PLL
******************************************************************/
//#define	PLL_BASE		(SFR_BASE+0X0F000)

#define	APLL_LOCK		(*(volatile unsigned long *)((SFR_BASE+0X0F000) + 0x0000))
#define	MPLL_LOCK		(*(volatile unsigned long *)((SFR_BASE+0X0F000) + 0x0004))
#define	EPLL_LOCK		(*(volatile unsigned long *)((SFR_BASE+0X0F000) + 0x0008))

#define	APLL_CON		(*(volatile unsigned long *)((SFR_BASE+0X0F000) + 0x000C))
#define	MPLL_CON		(*(volatile unsigned long *)((SFR_BASE+0X0F000) + 0x0010))
#define	EPLL_CON0		(*(volatile unsigned long *)((SFR_BASE+0X0F000) + 0x0014))
#define	EPLL_CON1		(*(volatile unsigned long *)((SFR_BASE+0X0F000) + 0x0018))


#define   OTHERS   			(*(volatile unsigned long *)((SFR_BASE+0X0F000) + 0x0900))

/*****************************************************************
**	ʱ�ӷ�����
******************************************************************/
//#define	CLK_BASE		(SFR_BASE+0X0F000)

#define	CLK_SRC			(*(volatile unsigned long *)((SFR_BASE+0X0F000) + 0x001C))
#define	CLK_DIV0		(*(volatile unsigned long *)((SFR_BASE+0X0F000) + 0x0020))
#define	CLK_DIV1		(*(volatile unsigned long *)((SFR_BASE+0X0F000) + 0x0024))
#define	CLK_DIV2		(*(volatile unsigned long *)((SFR_BASE+0X0F000) + 0x0028))
#define	CLK_OUT			(*(volatile unsigned long *)((SFR_BASE+0X0F000) + 0x002C))
#define	HCLK_GATE		(*(volatile unsigned long *)((SFR_BASE+0X0F000) + 0x0030))
#define	PCLK_GATE		(*(volatile unsigned long *)((SFR_BASE+0X0F000) + 0x0034))
#define	SCLK_GATE		(*(volatile unsigned long *)((SFR_BASE+0X0F000) + 0x0038))

/**************************************************************
**AHB���߿���
****************************************************************/
//#define	AHB_CON			(SFR_BASE+0X0F000)
#define	AHB_CON0		(*(volatile unsigned long *)((SFR_BASE+0X0F000) + 0x0100))
#define	AHB_CON1		(*(volatile unsigned long *)((SFR_BASE+0X0F000) + 0x0104))
#define	AHB_CON2		(*(volatile unsigned long *)((SFR_BASE+0X0F000) + 0x0108))




/****************************************************************
**            DRAM����״̬�Ĵ���
**
*****************************************************************/

/*-----------------------------------------------------*/
/*�洢������Ĵ���*/
#define 	MEM_SYS_CFG	(*(volatile unsigned long *)0x7E00F120)


/*===============================================*/

/*����2����    ��    */
/*  16λDRAM����״̬�Ĵ���     ��λֵ:0XAB0(1010 1011 0000)*/
#define	P0MEMSTAT		(*(volatile unsigned long *)0x7E000000)

/*  32λDRAM����״̬�Ĵ���     ��λֵ:0XAB0(1010 1011 0100)*/
#define	P1MEMSTAT		(*(volatile unsigned long *)0x7E001000)


/*����2����    д  */
/*  16λDRAM��������Ĵ���     */
#define	P0MEMCCMD		(*(volatile unsigned long *)0x7E000004)

/*  32λDRAM��������Ĵ���     */
#define	P1MEMCCMD		(*(volatile unsigned long *)0x7E001004)


/*����2����    д  */
/*  16λDRAM����ֱ������Ĵ���     */
#define	P0DIRECTCMD	(*(volatile unsigned long *)0x7E000008)

/*  32λDRAM����ֱ������Ĵ���     */
#define	P1DIRECTCMD	(*(volatile unsigned long *)0x7E001008)


/*  16λDRAM���ƴ洢���üĴ���     ��λֵ:0x0100 0020*/
#define	P0MEMCFG		(*(volatile unsigned long *)0x7E00000C)

/*  32λDRAM���ƴ洢���üĴ���     ��λֵ:0x0100 0020*/
#define	P1MEMCFG		(*(volatile unsigned long *)0x7E00100C)


/*  16λDRAM����ˢ�����ڼĴ���     ��λֵ:0xA60 (1010 0110 0000)*/
#define	P0REFRESH		(*(volatile unsigned long *)0x7E000010)

/*  32λDRAM����ˢ�����ڼĴ���     ��λֵ:0xA60 (1010 0110 0000)*/
#define	P1REFRESH		(*(volatile unsigned long *)0x7E001010)


/*  16λDRAM����CAS�ȴ�ʱ��Ĵ���     ��λֵ:0x06(0110)*/
#define	P0CASLAT		(*(volatile unsigned long *)0x7E000014)

/*  32λDRAM����CAS�ȴ�ʱ��Ĵ���     ��λֵ:0x06(0110 )*/
#define	P1CASLAT		(*(volatile unsigned long *)0x7E001014)


/*  16λDRAM����t_DQSS �Ĵ���     ��λֵ:0x01(0001)*/
#define	P0T_DQSS		(*(volatile unsigned long *)0x7E000018)

/*  32λDRAM����t_DQSS�Ĵ���     ��λֵ:0x01(0001 )*/
#define	P1T_DQSS		(*(volatile unsigned long *)0x7E001018)


/*  16λDRAM����t_MRD �Ĵ���     ��λֵ:0x02(0010)*/
#define	P0T_MRD			(*(volatile unsigned long *)0x7E00001C)

/*  32λDRAM����t_MRD�Ĵ���     ��λֵ:0x02(0010 )*/
#define	P1T_MRD			(*(volatile unsigned long *)0x7E00101C)


/*  16λDRAM����t_RAS �Ĵ���     ��λֵ:0x07(0111)*/
#define	P0T_RAS			(*(volatile unsigned long *)0x7E000020)

/*  32λDRAM����t_RAS�Ĵ���     ��λֵ:0x07(0111 )*/
#define	P1T_RAS			(*(volatile unsigned long *)0x7E001020)


/*  16λDRAM����t_RC�Ĵ���     ��λֵ:0x0B(1011)*/
#define	P0T_RC			(*(volatile unsigned long *)0x7E000024)

/*  32λDRAM����t_RC�Ĵ���     ��λֵ:0x0B(1011 )*/
#define	P1T_RC			(*(volatile unsigned long *)0x7E001024)


/*  16λDRAM����t_RCD�Ĵ���     ��λֵ:0x1D(0001 1101)*/
#define	P0T_RCD			(*(volatile unsigned long *)0x7E000028)

/*  32λDRAM����t_RCD�Ĵ���     ��λֵ:0x1D(0001 1101 )*/
#define	P1T_RCD			(*(volatile unsigned long *)0x7E001028)


/*  16λDRAM����t_RFC�Ĵ���     ��λֵ:0x212*/
#define	P0T_RFC			(*(volatile unsigned long *)0x7E00002C)

/*  32λDRAM����t_RFC�Ĵ���     ��λֵ:0x212*/
#define	P1T_RFC			(*(volatile unsigned long *)0x7E00102C)


/*  16λDRAM����t_RP�Ĵ���     ��λֵ:0x1D(0001 1101)*/
#define	P0T_RP			(*(volatile unsigned long *)0x7E000030)

/*  32λDRAM����t_RP�Ĵ���     ��λֵ:0x1D(0001 1101 )*/
#define	P1T_RP			(*(volatile unsigned long *)0x7E001030)


/*  16λDRAM����t_RRD�Ĵ���     ��λֵ:0x02*/
#define	P0T_RRD			(*(volatile unsigned long *)0x7E000034)

/*  32λDRAM����t_RRD�Ĵ���     ��λֵ:0x02*/
#define	P1T_RRD			(*(volatile unsigned long *)0x7E001034)


/*  16λDRAM����t_WR�Ĵ���     ��λֵ:0x03*/
#define	P0T_WR			(*(volatile unsigned long *)0x7E000038)

/*  32λDRAM����t_WR�Ĵ���     ��λֵ:0x03*/
#define	P1T_WR			(*(volatile unsigned long *)0x7E001038)


/*  16λDRAM����t_WTR�Ĵ���     ��λֵ:0x02*/
#define	P0T_WTR		(*(volatile unsigned long *)0x7E00003C)

/*  32λDRAM����t_WTR�Ĵ���     ��λֵ:0x02*/
#define	P1T_WTR		(*(volatile unsigned long *)0x7E00103C)

/*  16λDRAM����t_XP�Ĵ���     ��λֵ:0x01*/
#define	P0T_XP			(*(volatile unsigned long *)0x7E000040)

/*  32λDRAM����t_XP�Ĵ���     ��λֵ:0x01*/
#define	P1T_XP			(*(volatile unsigned long *)0x7E001040)


/*  16λDRAM����t_XSR�Ĵ���     ��λֵ:0x0A(0000 1010)*/
#define	P0T_XSR			(*(volatile unsigned long *)0x7E000044)

/*  32λDRAM����t_XSR�Ĵ���     ��λֵ:0x0A(0000 1010 )*/
#define	P1T_XSR			(*(volatile unsigned long *)0x7E001044)


/*  16λDRAM����t_ESR�Ĵ���     ��λֵ:0x14(0001 0100)*/
#define	P0T_ESR			(*(volatile unsigned long *)0x7E000048)

/*  32λDRAM����t_ESR�Ĵ���     ��λֵ:0x14(0001 0100 )*/
#define	P1T_ESR			(*(volatile unsigned long *)0x7E001048)



/*---------------------------------------------------------*/
/*	�洢����2�Ĵ���*/

/*  16λDRAM����t_ESR�Ĵ���     ��λֵ:0x0B00(0000 1011 0000 0000)*/
#define	P0MEMCFG2		(*(volatile unsigned long *)0x7E00004C)

/*  32λDRAM����t_ESR�Ĵ���     ��λֵ:0x0B00(0000 1011 0000 0000)*/
#define	P1MEMCFG2		(*(volatile unsigned long *)0x7E00104C)


/*---------------------------------------------------------*/
/*	CHIP_N_CFG�Ĵ���*/

/*  16λDRAM����CHIP_<n>_CFG�Ĵ���     ��λֵ:0x0FF00*/
#define	P0_chip_0_cfg		(*(volatile unsigned long *)0x7E000200)

/* 16λDRAM����CHIP_<n>_CFG�Ĵ���     ��λֵ:0x0FF00*/
#define	P0_chip_1_cfg		(*(volatile unsigned long *)0x7E000204)

/*  32λDRAM����CHIP_<n>_CFG�Ĵ���     ��λֵ:0x0FF00*/
#define	P1_chip_0_cfg		(*(volatile unsigned long *)0x7E001200)

/*  32λDRAM����CHIP_<n>_CFG�Ĵ���     ��λֵ:0x0FF00*/
#define	P1_chip_1_cfg		(*(volatile unsigned long *)0x7E001204)


/*---------------------------------------------------------*/
/*	�û���ݼĴ���*/

/*  16λDRAM��������û��Ĵ���     ��λֵ:0x00*/
#define	P0_user_stat		(*(volatile unsigned long *)0x7E000300)

/*  32λDRAM��������û��Ĵ���     ��λֵ:0x00*/
#define	P1_user_stat		(*(volatile unsigned long *)0x7E001300)


/*=====================================================*/
/****************************************************************
**         SROM���ƼĴ���
*****************************************************************/

/*SROM���߿�Ⱥ͵ȴ����ƼĴ���       ��λֵ:0x0000 000x*/
#define	SROM_BW		(*(volatile unsigned long *)0x70000000)

/*=====SROMҳ�Ĵ���       ��λֵ:0x000F 0000====*/
/* SROM Bank0 ���ƼĴ���*/
#define	SROM_BC0		(*(volatile unsigned long *)0x70000004)
/* SROM Bank1 ���ƼĴ���*/
#define	SROM_BC1		(*(volatile unsigned long *)0x70000008)
/* SROM Bank2 ���ƼĴ���*/
#define	SROM_BC2		(*(volatile unsigned long *)0x7000000C)
/* SROM Bank3 ���ƼĴ���*/
#define	SROM_BC3		(*(volatile unsigned long *)0x70000010)
/* SROM Bank4 ���ƼĴ���*/
#define	SROM_BC4		(*(volatile unsigned long *)0x70000014)
/* SROM Bank5 ���ƼĴ���*/
#define	SROM_BC5		(*(volatile unsigned long *)0x70000018)


/*=====================================================*/
/****************************************************************
**         ONENAND���ƼĴ���
*****************************************************************/


/* ONENAND���ƼĴ��� ����ַ����*/
#define	BANK0_BASE		(0x70100000)

/*Bank0 �ڴ��豸���üĴ���     ��λֵ:0x0000*/
#define	MEM_CFG0		(*(volatile unsigned long *)(BANK0_BASE+0X0000) )

/*Bank0 ���峤�ȼĴ���    ��λֵ:0x0000*/
#define	BURST_LEN0		(*(volatile unsigned long *)(BANK0_BASE+0X0010) )

/*Bank0 �ڴ渴λ�Ĵ���   ��λֵ:0x0000*/
#define	MEM_RESET0		(*(volatile unsigned long *)(BANK0_BASE+0X0020) )

/*Bank0 �жϴ���״̬�Ĵ���  ��λֵ:0x0000*/
#define	INT_ERR_STAT0 	(*(volatile unsigned long *)(BANK0_BASE+0X0030) )

/*Bank0 �жϴ������μĴ���  ��λֵ:0x0000*/
#define	INT_ERR_MASK0 	(*(volatile unsigned long *)(BANK0_BASE+0X0040) )

/*Bank0 �жϴ���ȷ�ϼĴ���  ��λֵ:0x0000*/
#define	INT_ERR_ACK0 	(*(volatile unsigned long *)(BANK0_BASE+0X0050) )

/*Bank0 ECC ����״̬�Ĵ���     ��λֵ:0x0000*/
#define	ECC_ERR_STAT0 	(*(volatile unsigned long *)(BANK0_BASE+0X0060) )

/*Bank0 ������ ID �Ĵ���             ��λֵ:0x0000*/
#define	MANUFACT_ID0  	(*(volatile unsigned long *)(BANK0_BASE+0X0070) )

/*Bank0 �豸 ID �Ĵ���	          ��λֵ:0x0000*/
#define	DEVICE_ID0	  	(*(volatile unsigned long *)(BANK0_BASE+0X0080) )

/*Bank0 ���ݻ����С�Ĵ���	          ��λֵ:0x0000*/
#define	DATA_BUF_SIZE0 	 (*(volatile unsigned long *)(BANK0_BASE+0X0090) )

/*Bank0 ���������С�Ĵ���          ��λֵ:0x0000*/
#define	BOOT_BUF_SIZE0 	 (*(volatile unsigned long *)(BANK0_BASE+0X00A0) )

/*Bank0 ���������Ĵ���		          ��λֵ:0x0000*/
#define	BUF_AMOUNT0 	 (*(volatile unsigned long *)(BANK0_BASE+0X00B0) )

/*Bank0 �����Ĵ���			          ��λֵ:0x0000*/
#define	TECH0 		 	 (*(volatile unsigned long *)(BANK0_BASE+0X00C0) )

/*Bank0 FBA ��ȼĴ���			     ��λֵ:0x000A*/
#define	FBA_WIDTH0 		 (*(volatile unsigned long *)(BANK0_BASE+0X00D0) )

/*Bank0 FPA ��ȼĴ���			     ��λֵ:0x0006*/
#define	FPA_WIDTH0 		 (*(volatile unsigned long *)(BANK0_BASE+0X00E0) )

/*Bank0 FSA ��ȼĴ���			     ��λֵ:0x0002*/
#define	FSA_WIDTH0 		 (*(volatile unsigned long *)(BANK0_BASE+0X00F0) )

/*Bank0 �����Ĵ���				     ��λֵ:0x0002*/
#define	REVISION0 		 (*(volatile unsigned long *)(BANK0_BASE+0X0100) )

/*Bank0 Dataram0 ����Ĵ���			     ��λֵ:0x0002*/
#define	DATARAM00 		 (*(volatile unsigned long *)(BANK0_BASE+0X0110) )

/*Bank0 Dataram1 ����Ĵ���			     ��λֵ:0x0003*/
#define	DATARAM10 		 (*(volatile unsigned long *)(BANK0_BASE+0X0120) )

/*Bank0 ͬ��ģʽ�Ĵ�����			     ��λֵ:0x0000*/
#define	SYNC_MODE0 		 (*(volatile unsigned long *)(BANK0_BASE+0X0130) )

/*Bank0 �����С�Ĵ�����    		     ��λֵ:0x0000*/
#define	TRANS_SPARE0  	 (*(volatile unsigned long *)(BANK0_BASE+0X0140) )

/*Bank0 ÿ����λ�Ĵ�����     		     ��λֵ:0x0000*/
#define	LOCK_BIT0	  	 (*(volatile unsigned long *)(BANK0_BASE+0X0150) )

/*Bank0 DBS_DFS ��ȼĴ�����   		     ��λֵ:0x0000*/
#define	DBS_DFS_WIDTH0	  (*(volatile unsigned long *)(BANK0_BASE+0X0160) )

/*Bank0 ҳ�����Ĵ�����		   		     ��λֵ:0x0000*/
#define	PAGE_CNT0		  (*(volatile unsigned long *)(BANK0_BASE+0X0170) )

/*Bank0 ����ҳ��ַ�Ĵ�����	   	  ��λֵ:0x0000*/
#define	ERR_PAGE_ADDR0	 (*(volatile unsigned long *)(BANK0_BASE+0X0180) )

/*Bank0 ������ӳټĴ�����	   	  ��λֵ:0x0006*/
#define	BURST_RD_LAT0 	 (*(volatile unsigned long *)(BANK0_BASE+0X0190) )

/*Bank0 �ж�����ʹ�ܼĴ�����    	  ��λֵ:0x0000*/
#define	INT_PIN_ENABLE0 	 (*(volatile unsigned long *)(BANK0_BASE+0X01A0) )

/*Bank0 �жϼ�����ڼ����Ĵ�����    	  ��λֵ:0x01F4*/
#define	INT_MON_CYC0  	 (*(volatile unsigned long *)(BANK0_BASE+0X01B0) )

/*Bank0 ��ַʱ�ӼĴ�����    	  ��λֵ:0x0003*/
#define	ACC_CLOCK0	  	 (*(volatile unsigned long *)(BANK0_BASE+0X01C0) )

/*Bank0 ������ͨ���Ĵ�����   	  ��λֵ:0x0000*/
#define	SLOW_RD_PATH0	  (*(volatile unsigned long *)(BANK0_BASE+0X01D0) )

/*Bank0 ������ַ�Ĵ�����    	  ��λֵ:0x0000*/
#define	ERR_BLK_ADDR0 	  (*(volatile unsigned long *)(BANK0_BASE+0X01E0) )

/*Bank0 Flash �汾 ID �Ĵ�����    	  ��λֵ:0x0000*/
#define	FLASH_VER_ID0  	  (*(volatile unsigned long *)(BANK0_BASE+0X01F0) )





/* ONENAND���ƼĴ��� ����ַ����*/
#define	BANK1_BASE		(0x70180000)

/*Bank1 �ڴ��豸���üĴ���     ��λֵ:0x0000*/
#define	MEM_CFG1		(*(volatile unsigned long *)(BANK1_BASE+0X0000) )

/*Bank1���峤�ȼĴ���    ��λֵ:0x0000*/
#define	BURST_LEN1		(*(volatile unsigned long *)(BANK1_BASE+0X0010) )

/*Bank1 �ڴ渴λ�Ĵ���   ��λֵ:0x0000*/
#define	MEM_RESET1		(*(volatile unsigned long *)(BANK1_BASE+0X0020) )

/*Bank1 �жϴ���״̬�Ĵ���  ��λֵ:0x0000*/
#define	INT_ERR_STAT1 	(*(volatile unsigned long *)(BANK1_BASE+0X0030) )

/*Bank1 �жϴ������μĴ���  ��λֵ:0x0000*/
#define	INT_ERR_MASK1 	(*(volatile unsigned long *)(BANK1_BASE+0X0040) )

/*Bank1 �жϴ���ȷ�ϼĴ���  ��λֵ:0x0000*/
#define	INT_ERR_ACK1 	(*(volatile unsigned long *)(BANK1_BASE+0X0050) )

/*Bank1 ECC ����״̬�Ĵ���     ��λֵ:0x0000*/
#define	ECC_ERR_STAT1 	(*(volatile unsigned long *)(BANK1_BASE+0X0060) )

/*Bank1 ������ ID �Ĵ���             ��λֵ:0x0000*/
#define	MANUFACT_ID1  	(*(volatile unsigned long *)(BANK1_BASE+0X0070) )

/*Bank1 �豸 ID �Ĵ���	          ��λֵ:0x0000*/
#define	DEVICE_ID1	  	(*(volatile unsigned long *)(BANK1_BASE+0X0080) )

/*Bank1 ���ݻ����С�Ĵ���	          ��λֵ:0x0000*/
#define	DATA_BUF_SIZE1 	 (*(volatile unsigned long *)(BANK1_BASE+0X0090) )

/*Bank1 ���������С�Ĵ���          ��λֵ:0x0000*/
#define	BOOT_BUF_SIZE1 	 (*(volatile unsigned long *)(BANK1_BASE+0X00A0) )

/*Bank1 ���������Ĵ���		          ��λֵ:0x0000*/
#define	BUF_AMOUNT1	 (*(volatile unsigned long *)(BANK1_BASE+0X00B0) )

/*Bank1 �����Ĵ���			          ��λֵ:0x0000*/
#define	TECH1 		 	 (*(volatile unsigned long *)(BANK1_BASE+0X00C0) )

/*Bank1 FBA ��ȼĴ���			     ��λֵ:0x000A*/
#define	FBA_WIDTH1 		 (*(volatile unsigned long *)(BANK1_BASE+0X00D0) )

/*Bank1 FPA ��ȼĴ���			     ��λֵ:0x0006*/
#define	FPA_WIDTH1 		 (*(volatile unsigned long *)(BANK1_BASE+0X00E0) )

/*Bank1 FSA ��ȼĴ���			     ��λֵ:0x0002*/
#define	FSA_WIDTH1 		 (*(volatile unsigned long *)(BANK1_BASE+0X00F0) )

/*Bank1 �����Ĵ���				     ��λֵ:0x0002*/
#define	REVISION1 		 (*(volatile unsigned long *)(BANK1_BASE+0X0100) )

/*Bank1 Dataram0 ����Ĵ���			     ��λֵ:0x0002*/
#define	DATARAM01 		 (*(volatile unsigned long *)(BANK1_BASE+0X0110) )

/*Bank1 Dataram1 ����Ĵ���			     ��λֵ:0x0003*/
#define	DATARAM11		 (*(volatile unsigned long *)(BANK1_BASE+0X0120) )

/*Bank1 ͬ��ģʽ�Ĵ�����			     ��λֵ:0x0000*/
#define	SYNC_MODE1 		 (*(volatile unsigned long *)(BANK1_BASE+0X0130) )

/*Bank1 �����С�Ĵ�����    		     ��λֵ:0x0000*/
#define	TRANS_SPARE1  	 (*(volatile unsigned long *)(BANK1_BASE+0X0140) )

/*Bank1 ÿ����λ�Ĵ�����     		     ��λֵ:0x0000*/
#define	LOCK_BIT1	  	 (*(volatile unsigned long *)(BANK1_BASE+0X0150) )

/*Bank1 DBS_DFS ��ȼĴ�����   		     ��λֵ:0x0000*/
#define	DBS_DFS_WIDTH1	  (*(volatile unsigned long *)(BANK1_BASE+0X0160) )

/*Bank1 ҳ�����Ĵ�����		   		     ��λֵ:0x0000*/
#define	PAGE_CNT1		  (*(volatile unsigned long *)(BANK1_BASE+0X0170) )

/*Bank1 ����ҳ��ַ�Ĵ�����	   	  ��λֵ:0x0000*/
#define	ERR_PAGE_ADDR1	 (*(volatile unsigned long *)(BANK1_BASE+0X0180) )

/*Bank1 ������ӳټĴ�����	   	  ��λֵ:0x0006*/
#define	BURST_RD_LAT1 	 (*(volatile unsigned long *)(BANK1_BASE+0X0190) )

/*Bank1 �ж�����ʹ�ܼĴ�����    	  ��λֵ:0x0000*/
#define	INT_PIN_ENABLE1 	 (*(volatile unsigned long *)(BANK1_BASE+0X01A0) )

/*Bank1 �жϼ�����ڼ����Ĵ�����    	  ��λֵ:0x01F4*/
#define	INT_MON_CYC1  	 (*(volatile unsigned long *)(BANK1_BASE+0X01B0) )

/*Bank1 ��ַʱ�ӼĴ�����    	  ��λֵ:0x0003*/
#define	ACC_CLOCK1	  	 (*(volatile unsigned long *)(BANK1_BASE+0X01C0) )

/*Bank1 ������ͨ���Ĵ�����   	  ��λֵ:0x0000*/
#define	SLOW_RD_PATH1	  (*(volatile unsigned long *)(BANK1_BASE+0X01D0) )

/*Bank1������ַ�Ĵ�����    	  ��λֵ:0x0000*/
#define	ERR_BLK_ADDR1 	  (*(volatile unsigned long *)(BANK1_BASE+0X01E0) )

/*Bank1 Flash �汾 ID �Ĵ�����    	  ��λֵ:0x0000*/
#define	FLASH_VER_ID1  	  (*(volatile unsigned long *)(BANK1_BASE+0X01F0) )






/*=====================================================*/
/****************************************************************
**         NAND  FLASH   ���ƼĴ���
*****************************************************************/
/*  NAND  FLASH   ���ƼĴ��� ����ַ����*/
#define	NAND_BASE		(0x70200000)

/*NAND FLASH ���üĴ���   ��λֵ:0x0000100X*/
#define	NFCONF		(*(volatile unsigned long *)(NAND_BASE+0X0000) )

/*NAND FLASH ���ƼĴ���   ��λֵ:0x000100C6*/
#define	NFCONT		(*(volatile unsigned long *)(NAND_BASE+0X0004) )

/*NAND FLASH �������üĴ���   ��λֵ:0x00 */
#define	NFCMMD 		(*(volatile unsigned long *)(NAND_BASE+0X0008) )

/*NAND FLASH ��ַ���üĴ���   ��λֵ:0x0000XX00 */
#define	NFADDR 		(*(volatile unsigned long *)(NAND_BASE+0X000C) )

/*NAND FLASH ���ݼĴ���   ��λֵ:0xXXXX */
#define	NFDATA  		(*(volatile unsigned long *)(NAND_BASE+0X0010) )


/*NAND Flash ECC ��һ���͵ڶ����Ĵ�������
����������ȡ    ��λֵ:0x00000000 */
#define	NFMECCD0 	(*(volatile unsigned long *)(NAND_BASE+0X0014) )

/* NAND Flash ECC �������͵��ĸ��Ĵ�������
����������ȡ    ��λֵ:0x00000000 */
#define	NFMECCD1  	(*(volatile unsigned long *)(NAND_BASE+0X0018) )

/*NAND Flash ECC����������룩�Ĵ�
�����ڱ��������ݵĶ�ȡ��λֵ:0x00000000 */
#define	NFSECCD  	(*(volatile unsigned long *)(NAND_BASE+0X001C) )


/*NAND Flash �ɱ����ʼ���ַ��λֵ:0x00000000 */
#define	NFSBLK 	(*(volatile unsigned long *)(NAND_BASE+0X0020) )

/* NAND Flash �ɱ�̽������ַ 
Nand Flash �����ڿ�ʼ�ͽ�����ַ���� 
��Soft lock��Lock-tightʹ�ܣ��ҿ�ʼ�ͽ�����ַ����ֵͬʱ
���� NAND Flash ���򽫱���ס ��λֵ:0x00000000 */
#define	NFEBLK  	(*(volatile unsigned long *)(NAND_BASE+0X0024) )


/*NAND Flash ����״̬�Ĵ���   ��λֵ:0x0080001D */
#define	NFSTAT 	(*(volatile unsigned long *)(NAND_BASE+0X0028) )


/*NAND Flash ECC ����״̬�Ĵ������� I/O [7:0]
   ��λֵ:0x007FFFFA */
#define	NFECCERR0 	(*(volatile unsigned long *)(NAND_BASE+0X002C) )

/* NAND Flash ECC ����״̬�Ĵ������� I/O [7:0]
  ��λֵ:0x007FFFFA */
#define	NFECCERR1  	(*(volatile unsigned long *)(NAND_BASE+0X0030) )


/*SLC �� MLC NAND Flash ECC ״̬�Ĵ���
   ��λֵ:0xXXXXXX  */
#define	NFMECC0 	(*(volatile unsigned long *)(NAND_BASE+0X0034) )

/* MLC NAND Flash ECC ״̬�Ĵ���
  ��λֵ:0xXXXXXX  */
#define	NFMECC1  	(*(volatile unsigned long *)(NAND_BASE+0X0038) )


/*NAND Flash ECC �Ĵ�������I/O [7:0]
  ��λֵ:0xXXXXXX  */
#define	NFSECC 	  	(*(volatile unsigned long *)(NAND_BASE+0X003C) )


/*NAND Flash 4 λECC ����ģʽ�Ĵ�����������[7:0]
  ��λֵ:0xXXXXXX  */
#define	NFMLCBITPT 	 (*(volatile unsigned long *)(NAND_BASE+0X0040) )



/*****************************************************************/
#endif
