#include "main.h"

/** more_numbers - prints 10 times numbers
 * followed by a new line.
 * _putchar used only three times in the code.
 * Return: Success (0).
 */

void more_numbers(void)
{
	int i = 48, n , j;

	while (i <= 57)
	{
		n = 48;

		while (n <= 57)
		{
			_putchar (n);
			n++;
		}

		j = 48;

		while (j <= 52)
		{
			_putchar (49);
			_putchar (j);
			j++;
		}

		_putchar ('\n');
		i++;
	}
}
