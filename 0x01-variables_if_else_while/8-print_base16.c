#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints hexadecimal numbers
 *
 * Return: Always 0(Sucess)
*/

int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	for (i = 97; i <= 103; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
