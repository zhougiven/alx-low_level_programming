#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - functions that prints the alphabet
 * in lowercase, followed by a new line.
 * _putchar used on twice in the code.
 * Return : Always 0.
 */

void print_alphabet(void)
{
	int i = 97;

	while (i <= 122)
	{
		putchar (i);
		i++;
	}
	putchar ('\n');
}
