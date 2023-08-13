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
	x = 0;

	while (x < 10)
	{
		i = x + 1;
		while (i < 10)
		{
			putchar(x);
			putchar(i);
			if (x != 8 || i != 9)
			{
				putchar(',');
				putchar(' ');
			}
			i++;
		}
		x++;
	}

	putchar('\n');

	return (0);

}
