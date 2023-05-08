#include "main.h"
#include <stdio.h>

/**
 * _strchr - The entry point
 * @s: input
 * @c: input
 * Return: Return 0 when successful
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return (NULL);
}
