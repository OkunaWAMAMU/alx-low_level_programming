#include <stdio.h>
#include "main.h"
/**
 * _puts - function prints a string followed by a new line
 * @str: the string to be printed
 **/
void _puts(char *str)
{
if (str != NULL)
{
for (; *str != '\0'; str++)
{
putchar(*str);
}
}
putchar('\n');
}
