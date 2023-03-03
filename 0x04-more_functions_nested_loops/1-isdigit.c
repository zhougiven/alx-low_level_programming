#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks for a digit (0 through 9).
 * If is a digit return 1 else return 0.
 * @c: a character argument.
 * Return: Success (1).
 *
 */

int _isdigit(int c)
{
	int result;

	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	
	return (result);
}
