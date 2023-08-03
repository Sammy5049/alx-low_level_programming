#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int k, counter = 0;
	unsigned long int new;

	k = 63;

	while (k >= 0)
	{
		new = n >> k;

		if (new & 1)
		{
			_putchar('1');
			counter++;
		}

		else if (new)
		{
			_putchar('0');
		}

		k--;
	}
	if (!counter)
		_putchar('0');
}
