#include "main.h"

/**
 * _strchr - Entry point.
 * @s: input.
 * @c: input.
 *
 * Return: pointer to the first occurence of c in s, or NULL
 * if not found.
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] >= '\0')
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (0);
}
