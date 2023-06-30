#include <stdio.h>

/**
 * print_buffer -  this function prints the content of a buffer
 * @b: this is a pointer to the buffer
 * @size: this is the number of bytes to print
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int index, k;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (index = 0; index < size; index += 10)
	{
		printf("%08x: ", index);

		for (k = 0; k < 10; k++)
		{
			if (index + k < size)
				printf("%02x", b[index + k]);
			else
				printf("  ");

			if (k % 2 != 0)
				printf(" ");
		}

		for (k = 0; k < 10; k++)
		{
			if (index + k >= size)
				break;

			if (b[index + k] >= 32 && b[index + k] <= 126)
				printf("%c", b[index + k]);
			else
				printf(".");
		}

		printf("\n");
}
}

