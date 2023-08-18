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
			_putchar('\\');
			a++;
		}
	}
	_putchar('\n');

}
