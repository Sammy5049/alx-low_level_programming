#include <stdio.h>

/**
 * main - Output lowercase, and then uppersae in new line
 *
 * Return: Always 0(Sucess)
*/

int main(void)
{
	int i;
	char alp[26] = 'abcdefghijklmnopqrstuvwxyz'
	char ALP[26] = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'

	for (i = 0; i < 26; i++)
	{
		putchar(alp[i]);
		putchar(APL[i]);
	}
	putchar('\n');
	return (0);
}
