#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * multiply -  Multiplies two positive integers.
 * @num1: operand.
 * @num2: operand
 * Return: Success (result).
 */

int multiply(int num1, int num2)
	{
		return (num1 * num2);
	}

/**
 * validate_input - checks whether the arguments meet the requirements.
 * @argc: argument number.
 * @argv: argument array.
 * @num1: points to an argument.
 * @num2: points to an argument.
 */

void validate_input(int argc, char *argv[], int *num1, int *num2)
{
	char *endptr;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	*num1 = strtol(argv[1], &endptr, 10);
	if (*endptr != '\0' || !isdigit(*argv[1]))
	{
		printf("Error\n");
		exit(98);
	}
	*num2 = strtol(argv[2], &endptr, 10);
	if (*endptr != '\0' || !isdigit(*argv[2]))
	{
		printf("Error\n");
		exit(98);
	}
}

/**
 * main - prints the products of two arguments.
 * @argc: argument number.
 * @argv: argument array.
 * Return: Success (0).
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	int result;

	validate_input(argc, argv, &num1, &num2);
	result = multiply(num1, num2);
	printf("%d\n", result);
	return (0);
}
