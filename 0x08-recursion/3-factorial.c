#include <stdio.h>
#include <stdlib.h>

/**
 * factorial - find and  returns the factorial of a given number.
 * @n: numbers whose factorial is returned
 *
 * Return: The factorial of n.
 */

int factorial(int n)
{
if (n < 0)
	return (-1);
if (n == 1)

return (1);

return (n * factorial(n - 1));
}
