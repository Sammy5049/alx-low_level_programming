#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all possible combination of number
 *
 * Return: Always 0(Sucess)
*/

int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
