#include "main.h"

/**
 * _islower - checks for a lowercase character.
 * @c: char to be checked.
 * Returns: 1 if c is lowercase, otherwise.
 */

int _islower(int c)
{
	int c = 97;

	while (c <= 122)
	{
		if (islower(c))
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
