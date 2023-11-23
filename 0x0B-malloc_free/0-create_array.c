#include "main.h"
#include <stdlib.h>
/**
 * create_array - creats an array of chars
 *
 * Description: create an array
 *
 * @size: size of array
 * @c: char
 *
 * Return: a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p = (char *) malloc(sizeof(char) * size);

	if (size == 0)
		return (NULL);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}

	return (p);
}
