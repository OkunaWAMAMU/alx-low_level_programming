#include "main.h"
/**
 * void positive_or_negative(int i) - checks if a number is positive or negative
 * @i: an integer that stores the number
 **/

void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);
}
