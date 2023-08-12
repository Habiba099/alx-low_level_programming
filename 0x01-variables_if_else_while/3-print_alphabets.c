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
	char b = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	while (b <= 'Z')
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
