#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - an entry point
 *
 * Description: the last digit
 *
 * Return: returns 0
 */
int main(void)
{
	int n;
	int lasdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lasdigit = n % 10;

	if (lasdigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lasdigit);
	}
	else if (lasdigit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lasdigit);
	}
	else if (lasdigit < 6 && lasdigit != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lasdigit);
	}
	return (0);
}
