#include "main.h"
/**
 * print_alphabet_x10 - print the alpha 10 times in lowercase
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char c = 'a';

		while (c <= 'z')
		{
			putchar(c);
			c++;
		}
		i++;
		putchar('\n');
	}
}
