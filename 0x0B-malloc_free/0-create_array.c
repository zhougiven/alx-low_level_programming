#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <limits.h>

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

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		buf = (char *)malloc(size * sizeof(char));
		buf[0] = c;
	}
	return (buf);
}

