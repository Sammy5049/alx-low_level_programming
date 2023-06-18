#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints alphabet in lowercase in new line
 *
 * Return: Always 0(Sucess)
*/


int main(void)
{
	int i;
	char alp[26] = "abcdefghijklmnopqrstwxyz";

	for (i = 0; i < 26; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
