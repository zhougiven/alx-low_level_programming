#include "main.h"

/**
 * _strspn - Entry point.
 * @s: input.
 * @accept: input.
 *
 * Return: Length of initial substring that consists entirely of characters
 * accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int r;

	while (*s)
	{
		r = 0;

		while (accept[r])
		{
			if (*s == accept[r])
			{
				n++;
				break;
			}
			else if (accept[r + 1] == '\0')
				return (n);
			r++;
		}
		s++;
	}
	return (n);
}
