#include <stdio.h>

/**
 * main - prints the size of various types on the computer it is compiled
 * and run on.
 * Return: Always 0.
 */
int main(void)

{
	char charType;
	int integerType;
	long int longIntType;
	long long int long2IntType;
	float floatType;

	printf("Size of a char: %lu byte(s)\n", sizeof(charType));
	printf("Size of an int: %lu byte(s)\n", sizeof(integerType));
	printf("Size of a long int: %lu byte(s)\n", sizeof(longIntType));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(long2IntType));
	printf("Size of a float: %lu byte(s)\n", sizeof(floatType));	
	return (0);
}
