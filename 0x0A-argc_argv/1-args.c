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
	(void)argv;
	printf("%d\n", (argc - 1));
	return (0);
}
