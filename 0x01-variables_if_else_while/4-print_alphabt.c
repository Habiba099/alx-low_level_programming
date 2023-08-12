#include <stdio.h>

/**
 * main - an entry point
 *
 * Description: print the alphapet
 *
 * Return: returns 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z' && c != 'q' && c != 'e')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
