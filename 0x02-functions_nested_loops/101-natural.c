#include <stdio.h>

/**
 * main - Entry point
 * Return: the return value is Zero
 **/

int main(void)
{
	int limit = 1024;
	int sum = 0;
	int index;

	for (index = 0; index < limit; index++)
	{
	if (index % 3 == 0 || index % 5 == 0)
	{
		sum += index;
	}
	}

	printf("The sum of multiples of 3 or 5 below %d is: %d\n", limit, sum);

	return (0);
}

