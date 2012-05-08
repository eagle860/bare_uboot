#include "ok6410.h"
#include "lcd.h"

extern const unsigned char fontdata_8x8[];


/* display controller */
#define MIFPCON     (*((volatile unsigned long *)0x7410800C))
#define VIDCON0      (*((volatile unsigned long *)0x77100000))
#define VIDCON1      (*((volatile unsigned long *)0x77100004))
#define VIDTCON0     (*((volatile unsigned long *)0x77100010))
#define VIDTCON1     (*((volatile unsigned long *)0x77100014))
#define VIDTCON2     (*((volatile unsigned long *)0x77100018))
#define WINCON0      (*((volatile unsigned long *)0x77100020))
#define VIDOSD0A      (*((volatile unsigned long *)0x77100040))
#define VIDOSD0B      (*((volatile unsigned long *)0x77100044))
#define VIDOSD0C      (*((volatile unsigned long *)0x77100048))
#define VIDW00ADD0B0      (*((volatile unsigned long *)0x771000A0))
#define VIDW00ADD1B0      (*((volatile unsigned long *)0x771000D0))
#define VIDW00ADD2      (*((volatile unsigned long *)0x77100100))


#define  VSPW         9
#define  VBPD          1
#define  LINEVAL     271
#define  VFPD          1


#define  HSPW         40    
#define  HBPD          1
#define  HOZVAL      479
#define  HFPD          1

#define LeftTopX     0
#define LeftTopY     0

#define RightBotX   479
#define RightBotY   271

#define FRAME_BUFFER   0x54000000

void lcd_init(void)
{
	/* 1. 设置相关GPIO引脚用于LCD */
	GPICON = 0xaaaaaaaa;  /* gpi0~gpi15用作lcd_vd[0~15] */
	GPJCON = 0xaaaaaaa;   /* gpj0~gpi11用作lcd */
	GPFCON &= ~(0x3<<28);
	GPFCON |=  (1<<28);    /* GPF14用作背光使能信号 */
	GPECON &= ~(0xf);
	GPECON |= (0x1);          /* GPE0用作LCD的on/off信号 */
	
	/* 2. 初始化6410的display controller 
	 * 2.1 hsync,vsync,vclk,vden的极性和时间参数
	 * 2.2 行数、列数(分辨率),象素颜色的格式
	 * 2.3 分配显存(frame buffer),写入display controller
	 */

	MIFPCON &= ~(1<<3);   /* Normal mode */

	SPCON    &= ~(0x3);
	SPCON    |= 0x1;            /* RGB I/F style */

#if 0
	VIDCON0 &= ~((3<<26) | (3<<17) | (0xff<<6));     /* RGB I/F, RGB Parallel format,  */
	VIDCON0 |= ((2<<6) | (1<<4) | (0x3<<2));      /* vclk== 27MHz Ext Clock input / (CLKVAL+1) = 27/3 = 9MHz */
#else
	VIDCON0 &= ~((3<<26) | (3<<17) | (0xff<<6)  | (3<<2));     /* RGB I/F, RGB Parallel format,  */
	VIDCON0 |= ((14<<6) | (1<<4) );      /* vclk== HCLK / (CLKVAL+1) = 133/15 = 9MHz */
#endif

	VIDCON0 &= ~(0x3);

	VIDCON1 &= ~((1<<7) | (1<<4));   /* 在vclk的下降沿获取数据 */
	VIDCON1 |= ((1<<6) | (1<<5) );  /* HSYNC高电平有效, VSYNC高电平有效 */

	VIDTCON0 = (VBPD << 16) | (VFPD << 8) | (VSPW << 0);
	VIDTCON1 = (HBPD << 16) | (HFPD << 8) | (HSPW << 0);
	VIDTCON2 = (LINEVAL << 11) | (HOZVAL << 0);

	WINCON0 &= ~(0xf << 2);
	WINCON0 |= (0xb<<2) | (1<<0);    /* unpacked 24 BPP (non-palletized R:8-G:8-B:8 ) */

	VIDOSD0A = (LeftTopX<<11) | (LeftTopY << 0);
	VIDOSD0B = ((RightBotX+1)<<11) | ((RightBotY+1) << 0);
	VIDOSD0C = (LINEVAL + 1) * (HOZVAL + 1);

	VIDW00ADD0B0 = FRAME_BUFFER;
	VIDW00ADD1B0 =  (((HOZVAL + 1)*4 + 0) * (LINEVAL + 1)) & (0xffffff);
	                                /* VBASEL = VBASEU + (LINEWIDTH+OFFSIZE) x (LINEVAL+1) 
                          *        = 0 + (480*4 + 0) * 272
                          *        = 
	                     */
	VIDW00ADD2 =  HOZVAL + 1;
}


void backlight_enable(void)
{
	GPFDAT |= (1<<14);
}

void backlight_disable(void)
{
	GPFDAT &= ~(1<<14);
}


void lcd_on(void)
{
	GPEDAT |= (1<<0);
	/* 等待10 frame */
}

void lcd_off(void)
{
	GPEDAT &= ~(1<<0);
}

void displaycon_on(void)
{
	VIDCON0 |= 0x3;
	//WINCON0 |= 1;
}

void displaycon_off(void)
{
	VIDCON0 &= ~0x3;
	//WINCON0 &= ~1;
}

void lcd_enable(void)
{
	/* 打开背光 */
	backlight_enable();
	/* 使能LCD本身 */
	lcd_on();
	/* 使能display controller */
	displaycon_on();
}

void lcd_disable(void)
{
	/* 关闭背光 */
	backlight_disable();
	/* 关闭LCD本身 */
	lcd_off();
	/* 关闭display controller */
	displaycon_off();
}

void lcd_clear(int color)
{
	volatile unsigned long *p = (volatile unsigned long *)FRAME_BUFFER;
	int cnt = 0;
	for(cnt = 0; cnt < (LINEVAL+1)*(HOZVAL+1); cnt++){
		p[cnt] = color;
	}
}
void lcd_point(int x, int y, int color)
{
	volatile unsigned long *p = (volatile unsigned long *)FRAME_BUFFER;
	p[x+480*y]=color;
}

void lcd_line(int x1, int y1, int x2, int y2, int color)
{
	int x, y;
	for (x = x1; x < x2; x++) {
		//y = (int)((y2-y1)*x/(x2-x1));
		y = x;
		lcd_point(x, y, color);
	}
}

void lcd_putchar(unsigned char ascii)
{
	static int x_position = 0;
	static int y_position = 0;
	unsigned char x, y;
	for (y = 0; y < 8; y++)
	{
		for (x = 0; x < 8; x++)
		{
			if((fontdata_8x8[ascii*8+y] & (0x80 >> x)) != 0)
			{
				lcd_point(x+x_position, y+y_position, 0);
			}
		}
	}
	x_position += 8;
	if (x_position > 480-8) {
		x_position = 0;
		y_position += 8;
	}
	if(y_position > 272-8) {
		y_position = 0;
		lcd_clear(0xffffff);
	}
}

void lcd_pic(int x, int y, int wide, int high, unsigned char* framebuffer)
{
	int ww, hh;
	int cnt = 0;
	int color = 0;
	for (hh = 0; hh < high; hh++) {
		for (ww = 0; ww < wide; ww++) {
			color = gImage_a[cnt++];
			color += ((int)gImage_a[cnt++]) << 8;
			color += ((int)gImage_a[cnt++]) << 16;
			lcd_point(x + ww, y + hh, color);
		}
	}
}

