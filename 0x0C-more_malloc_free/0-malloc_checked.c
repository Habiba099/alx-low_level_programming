#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocate memory
 * @b: size of memory to be allocated
 *
 * Return: pointers
 */
void *malloc_checked(unsigned int b)
{
	char *c;
	int *i;
	float *f;
	double *d;

	c = (char *) malloc(b);
	i = (int *) malloc(b);
	f = (float *) malloc(b);
	d = (double *) malloc(b);

	if (c == NULL)
		exit(98);
	if (i == NULL)
		exit(98);
	if (f == NULL)
		exit(98);
	if (d == NULL)
		exit(98);

	return (c);
	return (i);
	return (f);
	return (d);

	free(c);
	free(i);
	free(f);
	free(d);
}
