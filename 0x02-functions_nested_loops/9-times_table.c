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
		int mul = i * j;

		for (j = 0; j <= 9; j++)
		{
			putchar(mul);
			if (j != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
}
