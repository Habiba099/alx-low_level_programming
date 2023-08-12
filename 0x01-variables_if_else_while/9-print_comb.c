#include <stdio.h>
/**
 *main - an entry point
 *
 *Description:a program that prints all possible combinations of numbers
 *
 *Return: returns 0
*/

int main(void)
{
	int x = 0;

	while (x <= 9)
	{
		putchar(x);
		putchar(',' + ' ');
		x++;
	}
	return (0);
}
