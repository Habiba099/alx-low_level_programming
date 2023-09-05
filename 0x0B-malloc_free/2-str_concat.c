#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenate strings
 *
 * @s1: pointer
 * @s2: pointer
 *
 * Return: returns chars
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0, i = 0, j = 0;
	char *p;

	if (s1 == NULL && s2 == NULL)
	{
		return (str_concat(NULL, NULL));
	}
	if (s1 == NULL)
	{
		return (str_concat(NULL, s2));
	}
	if (s2 == NULL)
	{
		return (str_concat(s1, NULL));
	}
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	p = (char *)malloc((len1 + len2 + 1) * sizeof(char));

	if (p == NULL)
		return (NULL);
	while (i < len1)
	{
		p[i] = s1[i];
		i++;
	}
	while (j < len2)
	{
		p[i + j] = s2[j];
		j++;
	}
	p[i + j] = '\0';
	return (p);
}
