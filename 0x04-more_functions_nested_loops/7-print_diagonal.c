#include "main.h"
/**
 * print_diagonal - prints \
 *
 * @n:integer
 *
 * Return: void
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int a = 0;

		while (a < n)
		{
			int b = 0;

			while (b < a)
			{
				_putchar(' ');
				b++;
			}
			_putchar('\\');
			_putchar('\n');
			a++;
		}
	}
	_putchar('\n');

}
