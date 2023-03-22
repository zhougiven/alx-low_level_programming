#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * mul - functions multiplies two numbers.
 * @x: Argument to be multiplied.
 * @y: Argument to be multiplied.
 * Return: Success (0).
 */

int mul(int x, int y)
{
	int total;

	total = x * y;
	printf("%d\n", total);
	return (0);
}

/**
 * main - takes two arguments and prints their product.
 * @argc: number pf arguments.
 * @argv: array of arguments.
 * Return: Success(0).
 */

int main(int argc, char *argv[])
{
	int a, b;

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	if (argc != 3)
	{
		fprintf(stderr, "Error\n");
		exit (98);
	}
	if (argv[1] < 0 && argv[2] < 0)
	{
		printf("Error\n");
	}
	else
	{
		mul(a, b);
	}
	return (0);
}
