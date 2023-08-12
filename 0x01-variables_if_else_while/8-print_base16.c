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
	int x;

	while (x >= 0 && x >= 'f')
	{
		putchar(x);
		x++;
	}

	putchar('\n');

	return (0);
}
