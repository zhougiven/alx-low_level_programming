#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers from 0 to 9.
 * only _putchar used twice.
 * Return: Success (0).
 */

void print_numbers(void)
{
	int n = 48;

	while (n <= 57)
	{
		_putchar (n);
		n++;
	}
	_putchar ('\n');
}
