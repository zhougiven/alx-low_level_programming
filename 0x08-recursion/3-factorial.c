#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: value to be passed into the function.
 * Return: -1 if n < 0 to indicate an error.
 * 0 factorial is 1.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
