#include <stdio.h>
#include "main.h"
/**
 * print_fibonacci - prints numbers
 *
 * Description: print numbers
 *
 * Return: numbers
 */
int print_fibonacci(void)
{
	int arr[98];

	arr[0] = 1;
	arr[1] = 2;

	printf("%d, ", arr[0]);
	printf("%d, ", arr[1]);

	for (int i = 2; i < 98; i++)
	{
		arr[i] = arr[i - 1] + arr[i - 2];
		printf("%d, ", arr[i]);
	}

	return (0);
}
