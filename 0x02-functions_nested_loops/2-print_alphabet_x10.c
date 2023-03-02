#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - prints 10 times
 * the alphabet in lowercase, followed by a new line.
 * _putchar used only twice in the code.
 * Return: Success(0).
 */

void print_alphabet_x10(void)
{
	int i = 0, k;

	while (i <= 9)
	{
		int k = 97;

		while (k <= 122)
		{
			_putchar (k);
			k++;
		}
		i++;
	}
	_putchar ('\n');
	return (0);
}
