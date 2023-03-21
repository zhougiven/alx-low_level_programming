#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * Return: NULL if str = NULL
 * Return: Success (Pointer to the duplicated sttring).
 */
char *_strdup(char *str)
{
	char *ptr;
	size_t len;

	if (str == NULL)
	{
		return (NULL);
	}
	len = strlen(str) + 1;
	ptr = (char *)malloc(len);

	if (ptr == NULL)
	{
		return (NULL);
	}
	memcpy(ptr, str, len);
	return (ptr);
}
