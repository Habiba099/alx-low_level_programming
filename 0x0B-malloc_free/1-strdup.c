#include "main.h"
#include <stdlib.h>
/**
 * _strdup - duplicates strings
 *
 * @str: pointer
 *
 * Return: a pointer
 */
char *_strdup(char *str)
{
	int i = 0, len = 0;
	char *p;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len] != '\0')
	{
		len++;
	}

	p = malloc((len + 1) * sizeof(char));

	if (p == NULL)
	{
		return (NULL);
	}
	while (i < len)
	{
		p[i] = str[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
