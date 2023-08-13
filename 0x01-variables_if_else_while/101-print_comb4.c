#include <stdio.h>
/**
 * main - an entry point
 *
 * Description: print numbers
 *
 * Return: returns 0
 */
int main(void)
{
	int x, i, z;

	x = 0;

	while (x < 10)
	{
		i = x + 1;

		while (i < 10)
		{
			z = i + 1;
			putchar(x + 48);
			putchar(i + 48);
			putchar(z + 48);
			if (x != 7 || i != 8 || z != 9)
			{
				putchar(',');
				putchar(' ');
			}
			i++;
			z++;
		}
		x++;
	}

	putchar('\n');

	return (0);

}


