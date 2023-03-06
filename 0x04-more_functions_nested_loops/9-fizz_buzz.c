#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, followed by a new line.
 * for multiples of 3 print "Fizz" instead of the number.
 * for multiples of 5 print "Buzz" instead of the number.
 * for multiples of both 3 and 5 print FizzBuzz instead of the number.
 * Each number separated by a space.
 * Return: Success (0).
 */

int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", i);
		}
		i++;
	}
	putchar ('\n');
	return (0);
}
