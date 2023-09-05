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
	char *n = malloc((len + 2) * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len] != '\0')
		len++;

	if (n == NULL)
	{
		return (NULL);
	}

	while (i < len)
	{
		n[i] = str[i];
		i++;
	}
	return (n);
	free(n);

}
