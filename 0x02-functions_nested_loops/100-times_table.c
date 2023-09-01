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
	int i = 0, mul = 0;

	if (n < 15 && n > 0)
	{
		while (i < 13)
		{
			mul = n * i;
			if (i == 12)
			{
				printf("%d", mul);
			}
			else
			{
				printf("%d, ", mul);
			}
			i++;
		}
	}
}
