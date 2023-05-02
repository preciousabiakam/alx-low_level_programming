#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: The string
 * Return: length of a string
 */
int _strlen(char *s)
{
	int m = 0;

	while (*(s + m))
		m++;
	return (m);
}
