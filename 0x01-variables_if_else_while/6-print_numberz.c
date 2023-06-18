#include <stdio.h>
#include <stdlib.h>


/**
 * main - Prints all single numbers of base 10 from 0
 *
 * Return: Always 0(Sucess)
*/

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
