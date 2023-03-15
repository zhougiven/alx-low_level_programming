#include "main.h"

/**
 * print_square - prints a square followed by a new line.
 * only _putchar function used to print.
 * @size: is the size of the square.
 * if size is 0 or less, only prints a newline.
 * character # used to print the square.
 * Return: Success (0).
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar ('\n');
	}
	else
	{
		int i = 1, j;

		while (i <= size)
		{
			j = 1;

			while (j <= size)
			{
				_putchar (35);
				j++;
			}
			_putchar ('\n');
			i++;
		}
	}
}
