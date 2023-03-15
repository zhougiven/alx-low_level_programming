#include "main.h"

/**
 * print_most_numbers - prints numbers, from 0 to 9, followed by new line.
 * should not 2 and 4.
 * _putchar used twice in the code.
 * Return: Success (0).
 */

void print_most_numbers(void)
{
	int n = 48;

	while (n <= 57)
	{
		if (n != 50 && n != 52)
		{
			_putchar (n);
		}
		n++;
	}
	_putchar ('\n');
}
