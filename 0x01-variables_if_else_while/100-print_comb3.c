#include <stdio.h>
/**
 *  main - an entry point
 *
 *  Description: print numbers
 *
 *  Return: returns 0
 */
int main(void)
{
	int x, i;

	while (x < 10)
	{
		i = x + 1;
		while (i < 10)
		{
			if (x != 8 || i != 9)
			{
				putchar(x);
				putchar(i);
				putchar(',');
				putchar(' ');
				i++;
			}
		}
		x++;
		}

	putchar('\n');

	return (0);

}
