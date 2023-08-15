#include "main.h"
/**
 * _islower - checks if the alphabet is lowercase
 *
 * Description: prints lowercase alphabet
 *
 * @c: a variable with type char
 *
 * Return: return 1 if successful otherwise returns 0
 */
int _islower(int c)
{
	if (c >= 97 && c >= 122)
	{
		return (1);
	}

	else
	{
		return (0);
	}

}
