#include "main.h"

/**
 * _islower - checks for a lowercase character.
 * @c: char to be checked.
 * Return: 1 if c is lowercase, otherwise.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
