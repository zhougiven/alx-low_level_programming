#include "main.h"

/**
 * more_numbers - prints 10 times numbers
 * followed by a new line.
 * _putchar used only three times in the code.
 * Return: Success (0).
 */

void more_numbers(void)
{
	int i = 0, j;

	while (i <= 9)
	{
		j = 0;

		while (j <= 14)
		{
			if (j >= 10)
			{
				_putchar('1');
			}
			_putchar(j % 10 + '0');
			j++;
		}
		_putchar ('\n');
		i++;
	}
}
