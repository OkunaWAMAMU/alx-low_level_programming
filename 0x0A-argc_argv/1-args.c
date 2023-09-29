#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the number of arguments passed innto it.
 * @argc: accounts for the number of arguments passed into the program.
 * @argv: accounts for all the strings of argument passed in
 * the program'
 *  Return: Always 0.
 */
int  main(int argc, char *argv[])
{
(void)argv; /*Ignore argv*/

printf("%d\n", argc - 1);

return (0);
}
