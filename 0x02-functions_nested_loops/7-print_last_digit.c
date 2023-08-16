#include "main.h"

/**
 * print_last_digit -  prints the last digit of a number
 *
 * @i: integer
 *
 * Return: Always 0.
 */
int print_last_digit(int i)
{
	int ldigit = i % 10;

	_putchar(ldigit + '0');

	return (0);
}
