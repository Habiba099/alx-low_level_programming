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
	int i, j;

	if (size > 0)
	{
		for (int i = 1; i <= size; i++)
		{
			for (int j = 1; j <= i; j++)
			{
				printf("#");
			}
			printf("\n");
		}
	}
	else
	{
		printf("\n");
	}
}
