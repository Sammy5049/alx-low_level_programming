#include "main.h"
#include <unistd.h>


/**
 * print_alphabet_x10 -  prints 10 times the alphabet,
 * in lowercase, followed by a new line.
 *
 * Return: Always 0(Success)
*/



void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		 i++;
	_putchar('\n');
	}
}
