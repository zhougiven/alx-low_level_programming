#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program, followed by a newline.
 * when renamed, the program prints the new new name without having
 * to compile it again.
 * @argc: numbers of arguments.
 * @argv: array of arguments.
 *
 * Return: Success (0).
 */

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
