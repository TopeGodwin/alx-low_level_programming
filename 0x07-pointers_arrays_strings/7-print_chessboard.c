#include "main.h"

/**
 * _print_chessboard - Write a function that prints the chessboard.
 * @a: array number
 * Return: Always 0 (Success)
 */

void print_chessboard(char (*a)[8])
{
	int t, j;

	for (t = 0; t < 8; t++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[t][j]);
		_putchar('\n');
	}
}
