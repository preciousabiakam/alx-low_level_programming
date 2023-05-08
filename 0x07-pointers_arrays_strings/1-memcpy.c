#include "main.h"

/**
 * _memcpy - The entry point
 * @dest: input
 * @src: input
 * @n: input
 * Return: Return 0 when succesful
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
