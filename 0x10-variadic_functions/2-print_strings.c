#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - prints strings followed by a new line.
 * @separator: string to be printed to the function.
 * @n: number of strings passed to the function.
 * if separator is NULL does not print.
 * if string is NULL, prints "nil" instead.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	const char *s;
	va_list args;

	va_start(args, n);
	i = 0;
	while (i < n)
	{
		s = va_arg(args, const char *);
		if (s == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", s);
		}
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
