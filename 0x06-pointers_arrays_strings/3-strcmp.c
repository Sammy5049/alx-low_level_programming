#include "main.h"


/**
 * _strcmp - Compares two strings
 * @s1: first string thst s2 is compared with
 * @s2: second string compared with s1
 *
 * Return: return the true is not the same and false
 */


int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}
