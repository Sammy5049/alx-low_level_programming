#include "main.h"

/**
 * flip_bits - counts the number of bits to be changed
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to be changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int counter = 0;

	unsigned long int upperhand = n ^ m;
	unsigned long int new;

	int k = 63;

	while (k >= 0)
	{
		new = upperhand >> k;
		if (new & 1)
		{
			counter++;
		}

		k--;
	}

	return (counter);
}

