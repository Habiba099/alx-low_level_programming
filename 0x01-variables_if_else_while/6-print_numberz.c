#include <stdio.h>
/**
 *main - an entry point
 *
 *Description: print single digits
 *
 *Return: returns 0
*/

int main(void)
{
	int x = 0;

	while (x < 10)
	{
		putchar(x);
		x++;
	}

	putchar('\n');
	return (0);
}
