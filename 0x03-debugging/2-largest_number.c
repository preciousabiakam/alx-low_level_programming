#include "main.h"

/**
 * Main - Entry point
 * Description: - 'returns the largest of 3 numbers'
 * Return: largest number
 */

int main(void)
{
	int a, b, c;
	int largest;

	if (a > b && a > c)
	{
	largest = a;
	}
	else if (b > a && b > c)
	{
	largest = b;
	}
	else
	{
	largest = c;
	}

	return (largest);
}
