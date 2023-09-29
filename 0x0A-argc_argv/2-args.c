#include <stdio.h>
#include <stdlib.h>
/**
 * main - code to print content of argv
 * @argc: number of arguments
 * @argv: the arguments
 *
 * Return: Always 0'
 */
int main(int argc, char *argv[])
{
	int u;

	for (u = 0; u < argc; u++)
	{
	printf("%s\n", argv[u]);
	}
	return (0);
	}
