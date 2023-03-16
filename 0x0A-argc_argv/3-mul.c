#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the results of multiplication of 2 numbers.
 * assumption that two numbers and result of the multiplication
 * can be stored as an integer.
 * if the program does not receive 2 arguments, it prints error and returns 1.
 * @argc: number of arguments.
 * @argv: array of arguments passed into the program.
 * 
 * Return: Success (0).
 */

int main(int argc, char **argv)
{
	int i, j;

	if (argc != 3)
	{
		printf("Error\n");
		return (-1);
	}
	i = atoi(argv[1]);
	j = atoi(argv[2]);

	mul(i, j);
	printf("%d\n", mul);
	return (0);
}
