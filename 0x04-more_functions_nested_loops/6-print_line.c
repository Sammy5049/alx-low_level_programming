#include "main.h"

/**
 * print_line - draw straight line
 * @n: number of times to print character
 */


void print_line(int n)
{
	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			putchar('_');
		}
		putchar('\n');
	}
}
