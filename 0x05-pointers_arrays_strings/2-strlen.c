#include "main.h"
/**
 * _strlen - returns the length of a string
 * @str: The string
 * Return: length of a string
 */
int _strlen(char *str)
{
	int m = 0;

	while (*(str + m))
		m++;
	return (m);
}
