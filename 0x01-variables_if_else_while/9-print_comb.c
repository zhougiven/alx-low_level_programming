#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all possible combinations
 * of single digit numbers.
 * number should be in ascending order.
 * only  putchar can be used.
 * putchar to be used max of 4 times in the code.
 * Return: Always 0.
 */

int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar (n);
		if (n < 57)
		{
			putchar (44);
			putchar (32);
		}
	}
	putchar ('\n');
	return (0);
}
