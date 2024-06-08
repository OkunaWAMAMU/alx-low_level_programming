#include "main.h"
#include <stdio.h>
/**
 * main - Entry point of the program.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char dest[50];
	char src[] = "Hello, ";
	char append[] = "world!";

	_puts("Testing functions from dynamic library:");

	_puts("1. Testing _strcpy:");
	_strcpy(dest, src);
	_puts(dest);

	_puts("2. Testing _strcat:");
	_strcat(dest, append);
	_puts(dest);

	_puts("3. Testing _strncat:");
	_strncat(dest, append, 3);
	_puts(dest);

	_puts("4. Testing _strlen:");
	printf("Length of \"%s\": %d\n", dest, _strlen(dest));

	return (0);
}
