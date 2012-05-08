#include "ok6410.h"
#include "led.h"
#include "lcd.h"

void (*my_printf)(char* s,...) = (void *)0xcfe11fac;
int (*my_readline)(const char *const prompt) = (void *)0xcfe0af4c;
int (*my_strcmp)(const char * cs, const char * ct) = (void *)0xcfe18638;
int (*my_do_reset)() = (void *)0xcfe01184;
char * my_console_buffer = (char *)0xcfe38594;

int main()
{
	int len;
	int i;
	int color = 0;
	lcd_init();
	lcd_enable();
	while (1) {
		led_flick();
		len = my_readline ("\nplease input a string...\n");
		if (my_strcmp(my_console_buffer, "reset") == 0) {
			my_do_reset();
		}
		for (i = 0; i < len; i++)
		{
			color <<= 4;
			color += (my_console_buffer[i] > '9') ? (my_console_buffer[i] - 'a' + 10) : (my_console_buffer[i] - '0');
//			lcd_putchar(my_console_buffer[i]);
		}
//		lcd_clear(color);
		color = 0;
	}

	return 0;
}

