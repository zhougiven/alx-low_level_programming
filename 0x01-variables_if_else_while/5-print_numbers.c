#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all single digit numbers on base 10.
 * Return: Always 0.
 */

int main(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	putchar (n);
	putchar ('\n');
	return (0);
}
