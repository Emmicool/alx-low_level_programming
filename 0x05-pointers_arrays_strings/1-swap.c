#include "main.h"

/**
* swap_int - swaps two integers' values
* @a: first integer
* @b: second integer
* Description: *a and *b are pointers to a and b
* Return: returns nothing
*/

void swap_int(int *a, int *b)
{
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
}
