#include <stdio.h>
#include "main.h"

/**
 * print_chessboard - function prints the chess board.
 * @a: row variable of the 2D array.
 *
 * Return: void.
 */

void print_chessboard(char (*a)[8])
{
	char = i;
	char = j;

	i = 0;
	while ( i < 8)
	{
		j = 0;
		while (j <= 7)
		{
			_putchar (a[i][j]);
			j++;
		}
		_putchar ('\n');
		i++;
	}
}
