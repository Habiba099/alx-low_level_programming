#include "main.h"

/**
 * _abs - print the absolute value
 *
 * print_last_digit -  prints the last digit of a number
 *
 * @i: integer
 *
 * Return: Always 0.
 */
int _abs(int i)
{
	if (i < 0)
	{
	return (-i);
	}
	else
	{
		return (i);
	}

}

int print_last_digit(int i)
{
	int ldigit = i % 10;

	ldigit = _abs(ldigit);

	_putchar(ldigit + '0');
	return (ldigit);
}
