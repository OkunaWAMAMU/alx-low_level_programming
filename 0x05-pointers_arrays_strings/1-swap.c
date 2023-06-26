#include "main.h"
/**
 * swap_int - function that swaps values of two integers
 * @a: first integer
 * @b: second integer
 **/

void swap_int(int *a, int *b)
{
	int index = *a;
	*a = *b;
	*b = index;
}
