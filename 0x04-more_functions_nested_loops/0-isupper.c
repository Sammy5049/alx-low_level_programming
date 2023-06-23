#include "main.h"
#include <stdio.h>

/**
 * isupper - check if letter is uppercase
 * @C: Number to be checked
 * Return: 1 if tru and 0 if false
 */


int _isupper(int C)
{

	if (C >= 65 && C <= 90)
	{
		return (1);
	}
	else
		return (0);
}
