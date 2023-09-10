#include "main.h"
/**
 * print_numbers - prints numbers
 *
 * Description: prints numbers from 0 to 9
 *
 * Return: doesn't return a value
 */
void print_numbers(void)
{
	int i = 0;

	while (i >= 48 && i <= 57)
	{
		putchar(i);
		putchar('\n');
		i++;
	}
}
