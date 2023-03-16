#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * verify_num - checks if value passed are digits.
 * @str: array of strings.
 *
 * Return: Success (0).
 */

int verify_num(char *str)
{
	unsigned int verify;

	verify = 0;
	while (verify < strlen(str))
	{
		if (!isdigit(str[verify]))
		{
			return (0);
		}
		verify++;
	}
	return (1);
}

/**
 * main - prints sum of positive numbers, followed by a new line.
 * if no number is passed to the program, prints 0.
 * if one number contains symbols that are not digits, prints error.
 *
 * Return: Success(0).
 */

int main(int argc, char *argv[])
{
	int i;
	int verify;
	int sum = 0;

	verify = 1;
	while (verify < argc)
	{
		if(verify_num(argv[verify]))
		{
			i = atoi(argv[verify]);
			sum +=  i;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		verify++;
	}
	printf("%d\n", sum);
	return (0);
}
