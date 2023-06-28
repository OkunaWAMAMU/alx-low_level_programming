#include <stdio.h>
#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer
 * @index: the integer
 * Return: absolute value of an integer
 **/

int _abs(int index)
{
	if (index < 0)
		return (-index);
	else
		return (index);
}
