#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: first integer
 * @b: second integer
 * @t: third integer
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}
