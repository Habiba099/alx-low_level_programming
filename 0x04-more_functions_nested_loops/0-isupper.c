#include "main.h"
/**
 * _isupper - checks for uppercase letters
 *
 * @c: character
 *
 * Return: returns 1 if uppercase otherwise returns 0
 */
int _isupper(int c)
{

	if (c >= 65 && c <= 90)
	{
		putchar(c);
		putchar(':');
		putchar(' ');
		putchar('1');
	}
	else
	{
		putchar(c);
		putchar(':');
		putchar(' ');
		putchar('0');
	}
	return (0);
}
