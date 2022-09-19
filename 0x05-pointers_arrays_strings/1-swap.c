#include "main.h"

/**
* swap_int - swaps the values of two integers.
* @a: first integer.
* @b: second integer.
* Return: no return.
*/

void sawp_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
