#include "main.h"
/**
 * print_most_numbers - print numbers from 0 to 9
 *
 * Description: prints numbers
 *
 * Return: doesn't return a value
 */
void print_most_numbers(void)
{
	int i = 0;

	while (i >= 0 && i <= 9)
	{
		if (i == 2 || i == 4)
		{
			i++;
			continue;
		}
		putchar(i + '0');
		i++;
	}
	putchar('\n');
}
