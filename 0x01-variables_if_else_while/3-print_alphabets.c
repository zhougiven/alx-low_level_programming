#include <stdio.h>
#include <stdlib.h>
/**
 * main -prints all letter of the alphabet in lower cases
 * and the in uppercases.
 * Return: Always 0.
 */
int main(void)
{
	char ch, c;

	for (ch = 'a'; ch <= 'z'; ch++)
	putchar (ch);
	for (c = 'A'; c <= 'Z'; c++)
	putchar (c);
	putchar ('\n');
	return (0);
}
