#include <stdio.h>

/**
 * print_diagsums - function prints the sum of two diagonals of a square matrix
 * @a: this is The matrix array
 * @size: this is the size of the matrix.
 */
void print_diagsums(int *a, int size)
{
	int index, suma = 0, sumb = 0;

	for (index = 0; index < size; index++)
	{
		suma += a[index * size + index];
		sumb += a[index * size + (size - 1 - index)];
	}

	printf("%d, %d\n", suma, sumb);
}

