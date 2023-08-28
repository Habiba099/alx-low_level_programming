#include "main.h"
/**
 * times_table - prints times table
 *
 * Description: prints numbers
 *
 * Return: void
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			int mul = i * j;

			if (mul > 9)
			{
				putchar(mul / 10 + '0');
				putchar(mul % 10 + '0');
			}

			else
			{
				putchar(' ');
				putchar(mul + '0');
			}

			if (j != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
	}
}
