#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed into it.
 * prints a number followed by a new line.
 * @argc: number of arguments.
 * @argv: array of arguments passed into the program.
 *
 * Return: Success (0).
 */

int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
