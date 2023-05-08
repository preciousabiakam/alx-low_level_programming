#include "main.h"

/**
 * print_chessboard - The entry point
 * @a: array
 * Return: Return 0 when successful
 */
void print_chessboard(char (*a)[8])
{
	int i, n;

	for (i = 0; i < 8; i++)
	{
		for (n = 0; n < 8; n++)
			_putchar(a[i][n]);
		_putchar('\n');
	}
}
