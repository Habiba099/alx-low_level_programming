#include <stdio.h>
/**
 * main - an entry point
 *
 * Description: alphapet
 *
 * Return: returns 0
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
