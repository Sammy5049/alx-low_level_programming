#include "main.h"

/**
 * _strlen - returns the average length of a string
 * @s: Pointer address for the variable
 * Return: Always return the avglen on (Success)
 */


int _strlen(char *s)
{
	int avglen = 0;

	while (*s != '\0')
	{
		avglen++;
		s++;
	}
	return (avglen);
}
