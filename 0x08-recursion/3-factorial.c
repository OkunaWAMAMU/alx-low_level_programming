#include <stdio.h>
#include <stdlib.h>

/**
 * factorial - find and  returns the factorial of a given number.
 * n - numbers whose factorial is returned
 *
 * return: Always 0.
 */

int factorial(int n)
{

if (n <= 1)

return (1);

return (n * factorial(n - 1));
}
