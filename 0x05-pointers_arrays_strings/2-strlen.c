#include <stdio.h>
/**
 * _strlen - prints length of str
 *
 * @s: char
 *
 * Return: int
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != 0)
	{
		len++;
		s++;
	}

	return (0);
}
