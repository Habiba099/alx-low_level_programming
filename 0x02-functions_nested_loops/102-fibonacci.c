#include <stdio.h>
/**
 * main - entry point
 *
 * description: prints first 50 fibonacci numbers
 *
 * Return: 0
 */
int main(void)
{
	long int arr[50], i;
	arr[0] = 1;
	arr[1] = 2;

	for (i = 2; i < 50; i++)
	{

		arr[i] = arr[i - 1] + arr[i - 2];
	}

	for (i = 0; i < 50; i++)
	{
		printf("%lu ", arr[i]);
	}

	return (0);
}
