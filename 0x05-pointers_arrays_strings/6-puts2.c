#include "main.h"
#include <stdio.h>


/**
 * puts2 - prints every other character of a string, starting with
 * first character and followed by new line.
 * @str: the string to be printed
 */

void puts2(char *str)
{
	int digit = 0;

	int k = 0;

	char *h = str;

	int i;

	while (*h != '\0')
	{
		h++;
		digit++;
	}

	k = digit - 1;

	for (i = 0; i <= k; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
