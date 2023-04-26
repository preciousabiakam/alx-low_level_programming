#include "main.h"
/**
 * print_alphabet - a fuction to print the alphabets from 1 -z
 *
 * Return: Returns 0 if successful
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
_putchar('\n');
}
