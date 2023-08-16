#include <stdio.h>
#include "main.h"
/**
 * print_to_98 -  prints all natural numbers from n to 98
 *
 * @n: integer
 *
 * Return: returns 0
 */
void print_to_98(int n)
{
	while (n <= 98)
	{
		putchar(n);

		if (n != 98)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
		putchar('\n');
	}

}
