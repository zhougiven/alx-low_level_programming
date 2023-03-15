#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it receives each per line
 * including the first one.
 * @argc: number of arguments.
 * @argv: arrays of the arguments passed into the program.
 *
 * Return: Success (0).
 */

int main(int argc, char **argv)
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
