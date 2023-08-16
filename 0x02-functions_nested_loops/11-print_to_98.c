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
	int i;

	i = n;


	while (i <= 98)
	{
		putchar(i);

		if (i != 98)
		{
			putchar(',');
			putchar(' ');
		}
		putchar('\n');
	}

}
