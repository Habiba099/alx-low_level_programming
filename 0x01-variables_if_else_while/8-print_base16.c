#include <stdio.h>
/**
 * main - an entry point
 *
 * Description: a program that prints all the numbers of base 16 in lowercase
 *
 * Return: returns 0
 */
int main(void)
{
	char x = '0';
	char c = 'a';

	while (x <= '9')
	{
		putchar(x);
		x++;
	}

	while (c <= 'f')
	{
		putchar(c);
		c++;
	}

	putchat('\n');

	return (0);
}
