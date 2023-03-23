#include "variadic_functions.h"
#include <string.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything.
 * @format: list of types of arguments passed to the function.
 * c: char
 * i: integer
 * f: float
 * s: char *
 * if string = NULL, prints "(nil)" instead.
 */

void print_all(const char *const format, ...)
{
	va_list args;
	char c;
	int i;
	float f;
	char *s;
	char *format_copy;

	format_copy = strdup(format);
	va_start(args, format);
	while (*format_copy)
	{
		switch (*format_copy)
		{
			case 'c':
				c = (char)va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				i = va_arg(args, int);
				printf("%d", i);
				break;
			case 'f':
				f = (float)va_arg(args, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
				{
					printf("(nil)");
				}
				else
				{
					printf("%s", s);
				}
				break;
		}
		format_copy++;
		if (*format_copy)
		{
			printf(", ");
		}
	}
	printf("\n");
	va_end(args);
}
