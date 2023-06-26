#include "main.h"

/**
 * swap_int - a functionthat swaps pointer values of two intergers
 * @a: Derefrencing for first pointer value
 * @b: Derefrencing for second pointer value
 */


void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
