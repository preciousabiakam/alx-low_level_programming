#include "main.h"
/**
 * _isalpha - Returns 1 if true and 0 if otherwise
 * @c: is the int that will be used
 * Return: 0 if false
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
	return (1);
	}
	else
	return (0);
}
