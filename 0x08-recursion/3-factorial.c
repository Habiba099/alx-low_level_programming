#include "main.h"
/**
 * factorial - prints the fact of a number
 *
 * @n: number
 *
 * Return: a number
 */
int factorial(int n)
{
	if (n < 0)
	{
		return(-1);
	}
	else if (n == 0)
	{
		return(1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
