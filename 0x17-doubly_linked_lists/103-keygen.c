#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - generate key on a username in crackme5
 * @argc: num of passed args
 * @argv: command line vector
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	size_t count, count2;
	size_t size, add;
	char *letter = "A-CHRDw87lNS0E9B2TibgpnMVys5Xzvt
		OGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	char p[7] = "      ";

	if (argc != 2)
	{
		printf("Correct usage: ./keygen5 username\n");
		return (1);
	}
	size = strlen(argv[1]);
	p[0] = letter[(size ^ 59) & 63];
	for (count = 0, add = 0; count < size; count++)
		add += argv[1][count];
	p[1] = letter[(add ^ 79) & 63];
	for (count = 0, count2 = 1; count < size; count++)
		count2 *= argv[1][count];
	p[2] = letter[(count2 ^ 85) & 63];
	for (count2 = argv[1][0], count = 0; count < size; count++)
		if ((char)count2 <= argv[1][count])
			count2 = argv[1][count];
	srand(count2 ^ 14);
	p[3] = letter[rand() & 63];
	for (count2 = 0, count = 0; count < size; count++)
		count2 += argv[1][count] * argv[1][count];
	p[4] = letter[(count2 ^ 239) & 63];
	for (count2 = 0, count = 0; (char)count < argv[1][0]; count++)
		count2 = rand();
	p[5] = letter[(count2 ^ 229) & 63];
	printf("%s\n", p);
	return (0);
}

