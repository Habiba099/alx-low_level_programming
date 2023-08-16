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
	if (n > 0)
	{
		putchar(43);
		putchar(',');
		return (1);
	}
	else if (n == 0)
	{
		putchar(48);
		putchar(',');
		return (0);
	}
	else
	{
		putchar(45);
		putchar(',');
		return (-1);
	}
}
