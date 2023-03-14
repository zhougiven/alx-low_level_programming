#include "main.h"

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * Return: 0 if otherwise.
 * @n: input variable.
 */

int is_prime_number(int n)
{
	if (n > 1 && n % 2 != 0)
		return (1);
	else
		return (0);
}
