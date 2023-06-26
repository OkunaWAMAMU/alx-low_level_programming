#include "main.h"
/**
 * _strlen - a function that returns string legth
 * @s: variable of type character
 * Return: returns the length of the string
 **/

int _strlen(char *s)
{
	int length;

	length = 0;

	while (*s != '\0')
{
	length++;
	s++;
}
	return (length);
}

