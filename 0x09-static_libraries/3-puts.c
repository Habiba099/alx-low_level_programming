#include <stdio.h>
/**
 * _puts - function that prints a string
 *
 * @str: a pointer to a string
 *
 * Return: Nothing
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}
