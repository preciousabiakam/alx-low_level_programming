#include "main.h"

/**
 * _memset - The entry point
 * @s: pointed destination
 * @b: constant byte
 * @n: bytes
 * Return: Return 0 when successful
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
