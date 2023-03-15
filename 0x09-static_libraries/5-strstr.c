#include "main.h"

/**
 * _strstr - function searches for the first occurence of a
 * substring needle in a string haystack.
 * @haystack: a pointer to the string to be searched.
 * @needle: a pointer to the substring to search for.
 *
 * Return: pointer to the first occurence of needle in haystack
 * else NULL if needle is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *j = haystack;
		char *k = needle;

		while (*j == *k && *k != '\0')
		{
			j++;
			k++;
		}
		if (*k == '\0')
			return (haystack);
	}
	return (0);
}
