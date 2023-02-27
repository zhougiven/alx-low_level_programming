#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - prints whether the last digit of a
 * random number is positive or negative
 * Return: Always 0.
 */
int main(void)
{
	int n, last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* Finding the last digit by diving by 10 */
	last_digit = n % 10;

	if (n > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, last_digit);
	}

	else if (n = 0)
	{
		printf("Last digit of %i is %i and is 0\n", n, last_digit);
	}

	else if (n < 6 && !0)
	{
		printf("Last digit of %i is %i and is less than 6 and not 0\n",
			       	n, last_digit);
	}
	return (0);
}
