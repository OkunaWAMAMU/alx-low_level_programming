#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: the memory araea to be copied to
 * @src: the memory area to be copied from
 * @n: the number of bytes to be copied
 * Return: the return value is a pointer to dest
 **/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
	dest[index] = src[index];
	}
	return (dest);
}

