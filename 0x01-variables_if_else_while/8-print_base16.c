#include <stdio.h>
/**
 * main - an entry point
 *
 * Description: a program that prints all the numbers of base 16 in lowercase
 *
 * Return: returns 0
 **/

int main(void)
{
	char x = '0';
	char c = 'a';
	while (c <= 'f')
	{
		/*if ((x >= '0' && x <= '9') || (x >= 'a' && x <= 'f'))*/
		putchar(c);
		c++;
	}

	while (x <= '9')
	{
		putchar(x);
		x++;
	}

	putchar('\n');

	return (0);
}
