#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * only _putchar to be used to print the outcome.
 * @n: number of times the character \ should be printed.
 * the diagonal should end with a \n.
 * if n is 0 or less, the function only prints a \n.
 * Return: Success (0).
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar ('\n');
	}
	else
	{
		int j = 1, i;

		while (j <= n)
		{
			i = 1;

			while (i <= j)
			{
				_putchar (' ');
				i++;
			}
			_putchar ('\\');
			_putchar ('\n');
			j++;
		}
	}
}
