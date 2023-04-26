#include <stdio.h>

/**
 * print_to_98 - This functio will Prints all natural numbers from input to 98,
 *               separated by a comma
 * @n: The index to begin with
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
