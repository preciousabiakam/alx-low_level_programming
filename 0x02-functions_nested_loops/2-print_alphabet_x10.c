#include "main.h"
/**
 * print_alphabet_x10 - prints a-z 10times
 *
 * Return: Returns 0 if succesful
 */
void print_alphabet_x10(void)
{
	char c, i;

	for (i = 0; i <= 9; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
