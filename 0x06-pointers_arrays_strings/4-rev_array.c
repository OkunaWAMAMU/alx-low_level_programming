#include "main.h"
#include <stdio.h>

/**
 * reverse_array - function reverses content of an array of integers
 * @a: this is a pointer to the array
 * @n: this is the number of elements in the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int begin = 0;
	int stop = n - 1;
	int temp;

	while (begin < stop)
	{
	temp = a[begin];
	a[begin] = a[stop];
	a[stop] = temp;
	begin++;
	stop--;
	}
}

