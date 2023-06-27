#include "main.h"


/**
 * _atoi - converts string to an integer
 * @s: the pointer interger to be converted
 *
 * Return: Integer converted to the string
 */


int _atoi(char *s)
{
	int i, d, n, len, f, digit1;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit1 = 0;

	while (s[len] != '\0')
		len++;
	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++d;
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit1 = s[i] - '0';
			if (d % 2)
				digit1 = -digit1;
			n = n * 10 + digit1;
			f = 1;

			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}
	if (f == 0)
		return (0);
	return (n);
}
