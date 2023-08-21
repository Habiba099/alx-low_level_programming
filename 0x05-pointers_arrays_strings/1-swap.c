#include "main.h"
/**
 * swap_int - swaps integers
 *
 * @a: integer
 *
 * @b: integer
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
