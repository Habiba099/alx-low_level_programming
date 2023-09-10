#include "main.h"
/**
 * print_triangle - prints a triangle of #
 *
 * @size: size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	if (size > 0)
	{
		int i = 1;

		while (i <= size)
		{
			int j = 1, k = 1;

			while (j <= size - i)
			{
				putchar(' ');
				j++;
			}

			while (k <= i)
			{
				putchar('#');
				k++;
			}
			putchar('\n');
			i++;
		}
	}
	else
	{
		putchar('\n');
	}
}
