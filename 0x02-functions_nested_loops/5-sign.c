#include "main.h"
/**
 * print_sign -  prints the sign of a number
 *
 * @n: is a number
 *
 * Returns: 1 if n is greater than zero
 * and 0 if n is zero and -1 if n is less than zero
 */
int print_sign(int n)
{
	n = 0;

	if (n)
	{
		putchar(48);
		return (0);
	}
	else if (n > 0)
	{
		putchar(43);
		return (1);
	}
	else
	{
		putchar(45);
		return (-1);
	}
}
