#include "main.h"

/**
 * _strlen - returns the length of a string
 *@s:string
 *Return: void
 */

int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}
/**
 * puts_half - prints half of a string
 * @str: string to print
 */

void puts_half(char *str)
{
	int i;
	int len = _strlen(str);

	/*find the index to start depending on even or odd amount of strlen*/
	if (len % 2 != 0)
		i = (len / 2) + 1;
	else
		i = (len / 2);
	while (i < len)
	{
		_putchar (*(str + i));
		i++;
	}
	_putchar('\n');
}
