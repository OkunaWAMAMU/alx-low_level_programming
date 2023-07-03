/**
 * _memset - function that Fills memory with a constant byte
 * @s: a Pointer to the memory area
 * @b: constant byte to fill memory area
 * @n: this is the number of bytes to be filled.
 * Return: this is a pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		s[index] = b;
	}

	return (s);
}

