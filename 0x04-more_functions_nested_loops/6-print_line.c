#include "main.h"

/**
 * print_line - draws a straight line in th terminal.
 * _putchar to print.
 * n is the number of times character _ should be printed.
 * the line should end with a newline.
 * if n is 0 or less, the functions prints /n.
 * Return: Success (0).
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}

}
