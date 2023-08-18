#include "main.h"
/**
 * print_line - ptints _
 *
 * @n: integer
 *
 * Return: void
 *
 */
void print_line(int n)
{
	if (n > 0)
	{
		int x = 0;

		while (x < n)
		{
			putchar('_');
			x++;
		}

	}
	putchar('\n');
}
