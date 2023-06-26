#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* puts_half - function that prints half of a string
* @str: the string
* Return: half the string
**/

void puts_half(char *str)
{
	if (str != NULL)
	{
	int i;
	int length = strlen(str);
	int start_index;

	if (length % 2 == 0)
	{
		start_index = length / 2;
	} else
	{
	start_index = (length - 1) / 2 + 1;
	}
	for (i = start_index; i < length; i++)
	{
	putchar(str[i]);
	}
	}
	putchar('\n');
}

