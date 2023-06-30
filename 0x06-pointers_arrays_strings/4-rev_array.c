#include "main.h"


/**
 * reverse_array - reverse the items in an array
 * @a: the array to be reveresed
 * @n: size of the array
 *
 * Return: Always return 0(Sucess)
 */


void reverse_array(int *a, int n)
{
	int i = 0;

	int t;

	for (; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
