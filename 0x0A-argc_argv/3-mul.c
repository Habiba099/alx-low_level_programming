#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 *
 *@argc: number of arguments
 *@argv: pointer array to the arguments
 *
 * Return: returns 0
 */
int main(int argc, char *argv[])
{
	int result1 = atoi(argv[1]);
	int result2 = atoi(argv[2]);

	printf("%d\n", result1 * result2);

	if (argc == 1)
	{
		printf("Error\n");
	}
	return (1);
}

