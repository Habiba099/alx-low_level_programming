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

		while (x <= 14)
		{
			putchar(x);
			x++;
		}
		putchar('\n');
		i++;
	}
}
