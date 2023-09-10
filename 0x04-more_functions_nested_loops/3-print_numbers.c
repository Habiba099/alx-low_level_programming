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

	while (i >= 0 && i <= 9)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
