#include "main.h"
/**
 * is_prime_number - says if an integer is a prime number or not.
 * @n: number to evaluate
 *
 * Return: 1 if n is a prime number.
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n -1));
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * Return: 0 if otherwise.
 * @n: input variable.
 */

int actual_prime(int n, int i)
{
	if (n == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i-1));
}
