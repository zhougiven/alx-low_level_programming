#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks for upper case characters.
 * return 1 if c is uppercase else return 0.
 * @c: character argument.
 */

int _isupper(int c)
{
	int c;

	if (c => 65 && c <= 90)
	{
		return (1);
	}
	else 
	{
		return (0);
	}
}
