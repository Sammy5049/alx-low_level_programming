#include "main.h"

/**
 * print_most_numbers - prints number from 0 to 9 aside 2 and 4
 *
 * Return: Always 0
 */

void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		if (!(c == '2' || c == '4'))

			putchar(c);
	}
	putchar('\n');
}
