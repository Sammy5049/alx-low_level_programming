#include <stdio.h>
#include "main.h"


/**
 * *_strcpy - copies the string pointed to by src including the
 * terminating null byte (\0) to the buffer pointed to by dest
 * @dest: return value
 * @src: pointer
 * Return: Always dest(Success)
 */


char *_strcpy(char *dest, char *src)
{
	int P = 0;

	int V = 0;

	while (*(src + P) != '\0')
		P++;
	for (; V < P; V++)
		dest[V] = src[V];

	dest[P] = '\0';
	return (dest);
}
