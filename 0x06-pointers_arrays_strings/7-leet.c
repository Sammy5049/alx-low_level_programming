#include "main.h"

/**
* leet - encode into 1337speak
* @n: input value
* Return: n value
*/

char *leet(char *n)

{

	int t, s;

	char s1[] = "aAeEoOtTlL";

	char s2[] = "4433007711";

	for (t = 0; n[t] != '\0'; t++)
	{
		for (s = 0; s < 10; s++)
		{
			if (n[t] == s1[s])
			{
				n[t] = s2[s];
			}
		}
	}
	return (n);
}
