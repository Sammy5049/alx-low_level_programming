#include "main.h"
#include <stdlib.h>

/**
 * get_endianness - check if a machine is big or little endianness
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	size_t k = 1;
	char *s = (char *) &k;

	return (*s);
}

