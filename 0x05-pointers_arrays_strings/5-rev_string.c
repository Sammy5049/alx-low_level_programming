#include "main.h"


/**
 * rev_string - a function that reverses a string
 * @s: string to print
 */

void rev_string(char *s)
{
	char rev = s[0];

	int i;

	int counter = 0;

	while (s[counter] != '\0')
		counter++;
	for (i = 0; i < counter; i++)
	{
		counter--;
		rev = s[i];
		s[i] = s[counter];
		s[counter] = rev;
	}
}
