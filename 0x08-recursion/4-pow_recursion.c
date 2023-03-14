#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * Return: -1 if y < 0.
 * @y: y = 1 return x || y = 0 return 1.
 * @x: input variable to be raised to the exponential value.
 */

int _pow_recursion(int x, int y)
{
	int res, i;

	res = x * x;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 1)
	{
		return (x);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y == 2)
	{
		return (res);
	}
	else
	{
		i = 3;

		while (i <= y)
		{
			res = (res * x);
			i++;
		}
	}
	return (res);
}
