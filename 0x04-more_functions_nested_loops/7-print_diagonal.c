#include "main.h"
/**
 * print_diagonal - printing diagonal lines
 * @n: number of times
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int j, k;

	if (n <= 0)
	{
		_putchar('\n')
	}
	else
	{
		for (j = 1; j <= n; j++)
		{
			for (k = 1; k < j; k++)
			{
				_putchar(' ');
			}
			_putchar('\\')
		}
			_putchar('\n');
	}
}
