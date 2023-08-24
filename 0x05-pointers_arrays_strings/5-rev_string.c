#include "main.h"
/**
 * rev_string - prints a string in reverse
 *
 * @s - a pointer
 *
 * Return: void
 */
void rev_string(char *s)
{
	s = s + 8;
	printf("%c", *s);
	s = s - 1;
	printf("%c", *s);
	s = s - 1;
	printf("%c", *s);
	s = s - 1;
	printf("%c", *s);
	s = s - 1;
	printf("%c", *s);
	s = s - 1;
	printf("%c", *s);
	s = s - 1;
	printf("%c", *s);
	s = s - 1;
	printf("%c", *s);
	s = s - 1;
	printf("%c", *s);
}
