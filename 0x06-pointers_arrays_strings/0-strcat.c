#include <stdio.h>


/**
 * _strcat - A function to concatenate two strings and prints out the result
 * @dest: first character to concatenate
 * @src: second character to concatenate
 * Return: Return dest always
 */


char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;

	while (dest[a] != '\0')
	{
		a++;
	}

	b = 0;

	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';

	return (dest);
}
