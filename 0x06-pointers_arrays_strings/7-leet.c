/**
 * leet - a function that encodes a string into 1337
 * @str: the string to be encoded
 * Return: the return value is a pointer to the resulting string
 */
char *leet(char *str)
{
	char *leet_chars = "AEOTL";
	char *leet_replacements = "43071";
	int index, k;

	for (index = 0; str[index] != '\0'; index++)
	{
		for (k = 0; leet_chars[k] != '\0'; k++)
		{
			if (str[index] == leet_chars[k] || str[index] == leet_chars[k] + 32)
			{
				str[index] = leet_replacements[k];
				break;
			}
		}
	}

	return (str);
}

