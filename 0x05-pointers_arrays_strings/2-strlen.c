#include "main.h"
/**
 * _strlen - returns the length of a string
 * @str: The string
 * Return: length of a string
 */
int _strlen(char *str)
{
	size_t len = 0;

	while (*str++)
		len++;
	return (len);
}
