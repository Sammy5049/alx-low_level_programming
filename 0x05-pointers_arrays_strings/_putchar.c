#include <stdio.h>
#include <unistd.h>
#include "main.h"


/**
 * main - Entery point to print _putchar followed by a new line
 * @c: character to be printed
 *
 * Return: Always 1(Sucess)
 * on error -1 is returned
 */

int _putchar(char c)
{

	return (write(1, &c, 1));
}
