#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 *
 * @size: size of the array
 *
 * @c: the character
 *
 * Return: returns the pointer
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	p = (char *)malloc(size);

	if (size == 0)
	{
		return (NULL);
	}
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
}
