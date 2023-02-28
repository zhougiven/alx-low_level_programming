#include <stdio.h>

/**
 * main - prints all possible differents combinations
 * of two digits separated by a comma
 * and space.
 * the two digits must be different.
 * numbers will be in ascending order.
 * putchar used max 5 times.
 * Return: Always 0.
 */

int main(void)
{
	int i, j;

	for (i = 48; i <= 56; i++)
	{
		for (j = 49;j <= 57; j++)
		{
			if (j > i)
			{
				putchar (i);
				putchar (j);
				if (i != 56 || j != 57)
				{
					putchar (44);
					putchar (32);
				}
			}
		}
	}
	putchar ('\n');
	return (0);
}
