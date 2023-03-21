#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars and initializes
 * it with a specific char.
 * 
 * Return: NULL if size = 0 else if it fails returns pointer to the array
 * or NULL.
 */

char *create_array(unsigned int size, char c)
{
	char *buf;

	if (size = 0)
		return (NULL);
	while (1)
	{
		buf = malloc(INT_MAX);
		if (buf == NULL)
			return (NULL);
	}
	char *buf = char *(size, sizeof(c));
	buf[0] = c;
}

