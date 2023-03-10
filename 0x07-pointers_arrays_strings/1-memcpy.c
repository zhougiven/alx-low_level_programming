#include "main.h"

/**
 * _memcpy - a function that copies memory area.
 * @dest: memory where is stored.
 * @src: where memory is copied.
 * @n: byte number.
 *
 * Return: Copied memory with byte number changed,
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	while (r < i)
	{
		dest[r] = src[r];
		n--;
		r++;
	}
	return (dest);
}
