#include "main.h"
#include <unistd.h>  // Include this for the write function
#include <string.h>  // Include this if you are using _strlen
/**
 * _isdigit - Checks if a character is a digit (0 through 9).
 * @c: The character to check.
 *
 * Return: 1 if the character is a digit, 0 otherwise.
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/**
 * _strlen - Computes the length of a string.
 * @s: The string to compute the length of.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}

/**
 * _puts - Writes a string to the standard output (stdout).
 * @s: The string to write.
 */
void _puts(char *s)
{
	write(1, s, _strlen(s));
}

/**
 * _strcpy - Copies a string from source to destination.
 * @dest: The destination buffer.
 * @src: The source string.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while ((dest[i] = src[i]) != '\0')
		i++;

	return (dest);
}

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to convert.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int i = 0;

	if (s[0] == '-')
	{
		sign = -1;
		i++;
	}

	while (s[i] != '\0')
	{
		result = result * 10 + (s[i] - '0');
		i++;
	}

	return (sign * result);
}
