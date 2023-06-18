#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all possible combination of number
 *
 * Return: Always 0(Sucess)
*/

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
