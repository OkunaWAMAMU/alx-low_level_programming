#include "main.h"

/**
 * checkif_ - validates the xtics of string.
 * @s: target string.
 * @i: int to counnt.
 * @lon: length.
 *
 * Return: 1, 0.
 */
int checkif_(char *s, int i, int lon)
{
if (*(s + i) != *(s + lon - 1))
return (0);
if (i >= lon)
return (1);
return (checkif_(s, i + 1, lon - 1));
}
/**
 * _recurse - checks length of a string .
 * @s: string under target.
 *
 * Return: length of strng.
 */
int _recurse(char *s)
{
if (*s == '\0')
return (0);
return (1 + _recurse(s + 1));
}
/**
 * is_palindrome - checks if a string is parlindrome.
 * @s: Is a ponter to the string.
 *
 * Return: 1, 0.
 */
int is_palindrome(char *s)
{
	if (*s == 0)
	return (1);
	return (checkif_(s, 0, _recurse(s)));
}

