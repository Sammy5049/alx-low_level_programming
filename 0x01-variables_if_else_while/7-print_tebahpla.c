#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints lowwercase alp in reverse
 *
 * Return: Always 0(Sucess)
*/

int main(void)
{
	char ca;

	for (ca = 'z'; ca >= 'a'; ca--)
	{
		putchar(ca);
	}
	putchar('\n');
	return (0);
}
