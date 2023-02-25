#include <stdio.h>

/**
 * main - prints the size of various types on the computer it is compiled and run on.
 * Return: Always 0.
 */
int main()
{
	char charType;
	int integerType;
	long int longIntType;
	long long int long2IntType;
	float floatType;

	printf("Size of a char: %ld byte(s)\n",sizeof(charType));
	printf("Size of a int: %ld byte(s)\n",sizeof(integerType));
       	printf("Size of a long int: %ld byte(s)\n",sizeof(longIntType));
	printf("Size of a long long int: %ld byte(s)\n",sizeof(long2IntType));
	printf("Size of a float: %ld byte(s)\n",sizeof(floatType);	
	return (0);
}
