#include <stdio.h>
/**
 * main - entry point
 *
 * description: prints sum of multiples of 3 and 5 below 1024
 *
 * Return: 0
 */
int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 5 == 0 || i % 3 == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);

	return (0);
}
