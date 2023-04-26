#include "main.h"
#include <stdio.h>
/**
 * _abs - A function that computes the absolute value of an integer
 * @c:  is the int that will use for the arg
 * Return: c * -1
 */
int _abs(int c)
{
	if (c > 0 || c == 0)
	{
	return (c);
	}
	else
	return (c * -1);
}
