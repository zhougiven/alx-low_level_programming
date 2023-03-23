#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: parameters.
 * Return: 0 if n -== 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list args;

	va_start(args, n);
	i = 0;
	while (i < n)
	{
		sum +=  va_arg(args, int);
		i++;
	}
	va_end(args);
	return (sum);
}
