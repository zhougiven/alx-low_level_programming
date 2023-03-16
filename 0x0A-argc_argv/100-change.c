#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change
 * for an amount of money.
 * if the number of arguments passed into the program is not exactly 1,
 * print Error, followed by a newline.
 * if the number passed as the argument is negative,
 * prints 0, followed by a new line.
 * Use of unlimited number of coins of values 25, 10, 5, 2 and 1 cent.
 * @argc: number of arguments passed.
 * @argv: arrays of the arguments.
 *
 * Return: Success (0).
 */

int main(int argc, char *argv[])
{
	int a, b, c, d;
	int w, x, y, z, p;
	int sum;
	int i = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
	}
	else if (i < 0)
	{
		printf("0\n");
	}
	else if (i >= 0)
	{
		x = i / 25;
		a = i % 25;
		y = a / 10;
		b = a % 10;
		z = b / 5;
		c = b % 5;
		w = c / 2;
		d = c % 2;
		p = d / 1;
		sum = x + y + z + w + p;
		printf("%d\n", sum);
	}
	return (0);
}
