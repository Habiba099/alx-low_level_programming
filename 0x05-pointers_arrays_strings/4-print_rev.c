#include "main.h"
/**
 * print_rev - prints a string in reverse
 *
 * @s: a pointer to string
 *
 * Return: Nothing
 */
void print_rev(char *s)
{
	int i = 0;
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	i = length - 1;

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
