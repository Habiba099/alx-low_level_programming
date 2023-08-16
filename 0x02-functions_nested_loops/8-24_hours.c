#include "main.h"
/**
 * jack_bauer -  prints every minute of the day of Jack Bauer
 *
 */

void jack_bauer(void)
{
	int h = 0;

	while (h <= 23)
	{
		int m = 0;

		while (m <= 59)
		{
			putchar(h / 10 + 48);
			putchar(h % 10 + 48);
			putchar(':');
			putchar(m / 10 + 48);
			putchar(m % 10 + 48);
			m++;
		}
		h++;
	}
}
