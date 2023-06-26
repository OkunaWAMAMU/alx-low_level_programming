#include <stdio.h>
#include "main.h"

/**
* puts2 - function prints every other character of a string
* @str: the string
* Return: function returns the print
**/

void puts2(char *str)
{
	int index;

	if (str != NULL)
	{
		for (index = 0; str[index] != '\0'; index += 2)
		{
		putchar(str[index]);
		}
	}
	putchar('\n');
}

