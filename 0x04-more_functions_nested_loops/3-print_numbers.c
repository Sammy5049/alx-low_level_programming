#include <stdlib.h>
#include "main.h"
#include <stdio.h>


/**
 * print_numbers - Print numbers from 0 to 9
 *
 * Return: ALways 0
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
}
