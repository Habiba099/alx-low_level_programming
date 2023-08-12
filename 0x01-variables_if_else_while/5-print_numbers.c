#include <stdio.h>
/**
 *main - an entry point
 *
 *Description: prints numbers
 *
 *Return: returns 0
*/

int main(void)
{
	int x;

	while (x < 10)
	{
		printf("%d", x);
		x++;
	}
	putchar('\n');
	return (0);
}
