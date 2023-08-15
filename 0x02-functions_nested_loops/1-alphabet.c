#include "main.h"
/**
 * main - an entry point
 *
 * Description: function putchar
 *
 * Return: returns 0
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		print_alphabet();
		c++;
	}
}
