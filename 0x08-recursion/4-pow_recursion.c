#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * Return: -1 if y < 0.
 * @y: y = 1 return x || y = 0 return 1.
 * @x: input variable to be raised to the exponential value.
 */

int _pow_recursion(int x, int y)
{
	int res;

	res = x * x;

	if (y < 0)
	{
		return (-1);
	}
	if (y == 1)
	{
		return (x);
	}
	if (y == 0)
	{
		return (1);
	}
	if (y == 2)
	{
		return (res);
	}
	if (y > 2)
	{
		res = res * x;
	}
	return (x * _pow_recursion(x, (y - 1)));
}
