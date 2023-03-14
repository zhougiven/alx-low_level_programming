#include "main.h"

/**
 * _puts_recursion - prints a string followed by newline.
 *
 * Return: success.
 */

void _puts_recursion(char *s)
{
	char i[] = {""};
	*s = &i;

	_putchar (*s);
	_putchar ('\n');
}
