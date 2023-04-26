#include "main.h"
/**
 * print_sign - Prints the sign of a number
 * @n:  is the int that will use for the arg
 * Return: 0 if otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
}
	else if (n < 0)
	{
	_putchar('-');
	return (-1);
	}
	else
	{
	_putchar('0');
	return (0);
	}
}
