#include <unistd.h>
/**
 * _putchar - Writes a character to standard output (stdout).
 * @c: The character to be written.
 *
 * Return: On success, 1 is returned. On error, -1 is returned,
 * and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * _islower - Checks if a character is a lowercase letter.
 * @c: The character to be checked.
 *
 * Return: 1 if the character is a lowercase letter, 0 otherwise.
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
/**
 * _isalpha - Checks if a character is an alphabetic character.
 * @c: The character to be checked.
 *
 * Return: 1 if the character is an alphabetic character, 0 otherwise.
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
/**
 * _abs - Computes the absolute value of an integer.
 * @n: The integer to be evaluated.
 *
 * Return: The absolute value of n.
 */
int _abs(int n)
{
	return ((n < 0) ? -n : n);
}
/**
 * _isupper - Checks if a character is an uppercase letter.
 * @c: The character to be checked.
 *
 * Return: 1 if the character is an uppercase letter, 0 otherwise.
 */
int _isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}
