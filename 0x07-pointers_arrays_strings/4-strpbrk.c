#include "main.h"

/**
 * _strpbrk - functions search a string for any of a set of bytes.
 * @s: input.
 * @accept: input.
 *
 * Return: pointer to the byte in s taht matches one of the bytes in accept.
 */

char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s)
	{
		j = 0;

		while (accept[j])
		{
			if (*s == accept[j])
				return (s);
			j++;
		}
		s++;
	}
	return ('\0');
}
