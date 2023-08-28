#include "main.h"
/**
 * print_square - prints a square
 *
 * @size: integer
 *
 * Return: void
 */
void print_square(int size)
{
	int r, h;

	if (size > 0)
	{
		for (r = 0; r < size; r++)
		{
			for (h = 0; h < size; h++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}

}
