#include <stdio.h>
/**
 *
 *
 */
void print_to_98(int n)
{
	int i;

	while ((i = n))
	{
		if (i < 0)
		{
			putchar('-');
			i = -i;
		}
	
	}


	putchar(',');
	putchar(' ');

}
