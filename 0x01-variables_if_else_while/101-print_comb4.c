#include <stdio.h>
/**
 * main - prints all possible different combinations
 * of three digits separated by comma and a space.
 * 012, 120, 102, 021, 201, 210 are considered the
 * same combinations of the three digits 0, 1, 2.
 * numbers will be in ascending order.
 * putchar only to be used six times.
 * Return: Always 0.
 */

int main(void)
{
	int i, j, k;

	for (i = 48; i <= 55; i++)
	{
		for (j = 49; j <= 56; j++)
		{
			for (k = 50; k <= 57; k++)
			{
				if (k > j && j > i)
				{
					putchar (i);
					putchar (j);
					putchar (k);

					if (i != 55 || j != 56)
					{
						putchar (44);
						putchar (32);
					}
				}
			}
		}
	}
	putchar ('\n');
	return (0);
}
