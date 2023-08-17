#include "main.h"
/**
 * more_numbers - prints numbers
 *
 * Description: prints numbers
 *
 * Return: nothing
 */
void more_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		int x = 0;

		while (x >= 0 && x <= 14)
		{
			putchar(x / 10 + '0');
			putchar(x % 10 + '0');
			x++;
		}
		i++;
		putchar('\n');
	}
}
