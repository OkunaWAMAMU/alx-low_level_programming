#include "main.h"

/**
 * rot13 - a function that encodes a string using ROT13
 * @str: the string to be encoded
 *
 * Return: return value is pointer to resulting string
 */
char *rot13(char *str)
{
	char *alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int index, k;

	for (index = 0; str[index] != '\0'; index++)
	{
		for (k = 0; alpha[k] != '\0'; k++)
		{
			if (str[index] == alpha[k])
			{
				str[index] = rot13[k];
				break;
			}
		}
	}

	return (str);
}

