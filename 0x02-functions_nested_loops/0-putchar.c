#include <unistd.h>
#incluse "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	char std[] = "_putchar";

	putchar(std[]);

	return (write(1, &c, 1));
}
