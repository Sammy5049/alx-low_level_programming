#include "main.h"
#include <stdio.h>

/**
 * _puts - Prints a string folowed by new line
 * @str: string to be printed
 */


void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
