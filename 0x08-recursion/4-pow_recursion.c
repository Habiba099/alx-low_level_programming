#include "main.h"
/**
 * _pow_recursion - prints a number
 *
 * @x: base
 * @y: exponent
 *
 * Return: a number
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if(y == 0)
	{
		return(1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
