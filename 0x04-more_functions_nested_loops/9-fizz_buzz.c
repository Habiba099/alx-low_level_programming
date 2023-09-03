#include <stdio.h>
/**
 * fizz_buzz - prints numbers
 *
 * Description: prints numbers
 *
 * Return: void
 */
void fizz_buzz(void)
{
	int arr[100];

	for (int i = 0; i < 100; i++)
	{
		arr[i] = i + 1;
		if (arr[i] % 3 == 0 && arr[i] % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (arr[i] % 3 == 0)
		{
			printf("Fizz");
		}
		else if (arr[i] % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", arr[i]);
		}
		if (i < 99)
		{
			printf(" ");
		}
	}
	printf("\n");
}
/**
 * main - entry point
 *
 * Description: entry point
 *
 * Return: void
 */
int main(void)
{
	fizz_buzz();

	return (0);
}
