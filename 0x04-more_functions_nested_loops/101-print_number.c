#include "main.h"
#include <stdio.h>

/**
 * print_number - prints an integer
 * @n: integer to be printed
 */

void print_number(int n)
{
	unsigned int j = n;

	if (n < 0)
	{
		n *= -1;
		j = n;
		putchar('_');
	}
	j /= 10;
	if (j != 0)
	print_number(j);
	putchar((unsigned int) n % 10 + '0');
}
