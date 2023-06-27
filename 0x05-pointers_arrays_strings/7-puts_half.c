#include <stdio.h>
#include "main.h"


/**
 * puts_half - prints half a string followed by new line
 * @str: string to be printed from.
 */


void puts_half(char *str)
{
	int i, m, j, digit;

	digit = 0;

	for (i = 0; str[i] != '\0'; i++)
		digit++;

	j = (digit / 2);
	m = (digit % 2);

	if (m == 1)
		j = ((digit + 1) / 2);
	for (i = j; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
