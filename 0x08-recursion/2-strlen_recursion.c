#include "main.h"

/**
 * _strlen_recursion - return the length of a string.
 * @s: string to be calculated.
 *
 * Return: Length of the string.
 */

int _strlen_recursion(char *s)
{
	int str = 0;

	if (*s)
	{
		str++;
		str += _strlen_recursion(s + 1);
	}
	return (str);
}
