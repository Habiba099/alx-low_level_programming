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
		putchar(x + '0');
		if (x < 9)
        {
            putchar(',');
            putchar(' ');
        }
		x++;
	}

	putchar('\n');
	return (0);
}
