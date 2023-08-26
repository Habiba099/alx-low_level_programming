#include "main.h"
/**
 * print_times_table - prints the times table
 *
 * @n: integer
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i;

	if (n < 0 || n > 15)
	{
		return;
	}

	for (i = 0; i <= 14; i++)
	{
		printf("%d, ", n * i);
	}
	putchar('\n');
}
