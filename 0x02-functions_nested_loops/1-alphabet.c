#include <stdio.h>
#include <unistd.h>

/**
 * print_alphabet - Entry point prints the alphabet in lowercase
 *
 * Return: Always 0(Success)
*/


void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
}
