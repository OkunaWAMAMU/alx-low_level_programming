#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the name of the program.
 * @argc: accounts for the number of arguments passed to the program.
 * @argv: Prints all the arguents passed to the program
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
if (argc >= 1)
{
printf("%s\n", argv[0]);
}
return (0);
}
