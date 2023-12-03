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
	int sum = 0;
	char *p;

	if (argc > 2)
	{
		while (--argc)
		{
			p = argv[argc];

			while (*p)
			{
				if (*p == '0' || *p > '9')
				{
					return (printf("Error\n"), 1);
				}
				sum += atoi(argv[argc]);
				p++;
			}
		}
		printf("%d\n", sum);
	}

	else if (argc == 1 || argc == 2)
	{
		printf("0\n");
	}
	return (0);
}

