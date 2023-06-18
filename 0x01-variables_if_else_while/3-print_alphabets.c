#include <stdio.h>

/**
 * main - Output lowercase, and then uppersae in new line
 *
 * Return: Always 0(Sucess)
*/

int main(void)
{
	int i;
	char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for (i = 0; i < 52; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
