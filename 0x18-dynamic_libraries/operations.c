#include <stdio.h>

int add(int a, int b)
{
	return a + b;
}

int sub(int a, int b)
{
	return a - b;
}

int mul(int a, int b)
{
	return a * b;
}

int div(int a, int b)
{
	if (b == 0)
	{
		fprintf(stderr, "Division by zero is undefined.\n");
		return 0; // Handle division by zero as returning zero
	}
	return a / b;
}
int mod(int a, int b)
{
	if (b == 0)
	{
		fprintf(stderr, "Modulo by zero is undefined.\n");
		return 0; // Handle modulo by zero as returning zero
	}
	return a % b;
}
