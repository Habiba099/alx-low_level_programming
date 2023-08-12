#include <stdio.h>
/**
 *main - an entry point
 *
 *Description:  prints reversed alphapet
 *
 *Return: returns 0
*/
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}

	putchar('\n');

	return (0);
}
