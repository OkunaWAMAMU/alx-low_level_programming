#include <stdio.h>

/**
 * main - Entry point
 * Return: the return value is Zero
 */
int main(void)
{
	int limit = 4000000;
	int term1 = 1, term2 = 2, nextTerm;
	int sum = 2;

	while (term2 <= limit)
	{
	nextTerm = term1 + term2;

	if (nextTerm % 2 == 0)
	sum += nextTerm;

	term1 = term2;
	term2 = nextTerm;
	}

	printf("%d\n", sum);

	return (0);
}

