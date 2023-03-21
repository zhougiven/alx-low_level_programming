#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * str_concat - concatenates two strings.
 * The returned pointer points to anewly allocated space in memory
 * which contains the contents of s1, followed by the contents of s2
 * and null terminated.
 * if NULL is passed, treat it as an empty string.
 * @s1: first string to be stored.
 * @s2: second string to be stored.
 * Return: Null on failure.
 */

char *str_concat(char *s1, char *s2)
{
	size_t len1, len2;
	char *result;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = strlen(s1);
	len2 = strlen(s2);
	result = (char *)malloc(len1 + len2 + 1);
	if (result == NULL)
	{
		return (NULL);
	}
	memcpy(result + len1, s2, len2 + 1);
	return (result);
}
