#include <stdio.h>
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
	int i;

	(void)argc;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
