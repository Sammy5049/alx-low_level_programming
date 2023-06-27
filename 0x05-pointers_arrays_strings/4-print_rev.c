#include "main.h"
#include <stdio.h>


/**
 * print_rev - function to print a string in reverse
 * @s: string to be printed
 */


void print_rev(char *s)
{
	int opt1 = 0;

	int d;

	while (*s != '\0')
	{
		opt1++;
		s++;
	}

	s--;

	for (d = opt1; d > 0; d--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');

}
