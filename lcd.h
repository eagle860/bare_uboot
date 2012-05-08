#ifndef _LCD_H_
#define _LCD_H_


void lcd_init(void);
void lcd_enable(void);
void lcd_clear(int color);
void lcd_point(int x, int y, int color);
void lcd_line(int x1, int y1, int x2, int y2, int color);
void lcd_putchar(unsigned char ascii);
void lcd_pic(int x, int y, int wide, int high, unsigned char* framebuffer);


#endif // ~_LCD_H_
