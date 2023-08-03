#include "dammy.h"
#include <stdio.h>

/**
 * binary_to_uint - function to convert binary number to unsigned int
 * @b: string with the binary number
 *
 * Return: the number converted
 */
unsigned int binary_to_uint(const char *b)
{
	size_t con_dig = 0;
	int j;

	if (b == NULL)
		return (0);
	j = 0;
	while (b[j])
	{
		if (b[j] < '0' || b[j] > '1')
		{
			return (0);
		}
		con_dig = 2 * con_dig + (b[j] - '0');
		j++;
	}

	return (con_dig);
}
