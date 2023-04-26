#include "main.h"
/**
 * _islower - returns 1 if the  true and 0 if false
 * @c:  is the int that will use for the arg
 * Return: 0 if false
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
