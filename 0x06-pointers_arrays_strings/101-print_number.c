#include "main.h"


/**
* print_number - print numbers chars
* @n: integer params
* Return: 0
*/

void print_number(int n)

{

	unsigned int p1;

	p1 = n;

	if (n < 0)
	{
		_putchar('-');
		p1 = -n;
	}
	if (p1 / 10 != 0)
	{
		print_number(p1 / 10);
	}
	_putchar((p1 % 10) + '0');
}
