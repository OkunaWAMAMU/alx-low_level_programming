#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - function that prints the string in reverse
 * @s: the string
 **/

void print_rev(char *s)
{
	int index;

	if (s != NULL)
	{
	int length = strlen(s);

	for (index = length - 1; index >= 0; index--)
	{
		putchar(s[index]);
	}
	}
	putchar('\n');
}

