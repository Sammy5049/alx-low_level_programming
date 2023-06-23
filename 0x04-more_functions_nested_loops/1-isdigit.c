#include "main.h"
#include <stdio.h>

/**
 * _isdigit - Checks if number is digit
 * @C: Number to check
 *
 * Return: 1 if number is digit and 0 if not digit
 */


int _isdigit(int C)
{
	if (C >= 48 && C <= 57)
	{
		return (1);
	}
	return (0);
}
