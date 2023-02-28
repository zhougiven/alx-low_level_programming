#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all the numbers of base 16
 * in lowercase.
 * Only putchar can only be used.
 * Return: Always 0.
 */

int main(void)
{
	char n, c;

	for (n = '0'; n <= '9'; n++)
	{
		putchar (n);
	}

	for (c = 'a'; c <= 'f'; c++)
	{
		putchar (c);
	}
	putchar ('\n');
	return (0);
}
