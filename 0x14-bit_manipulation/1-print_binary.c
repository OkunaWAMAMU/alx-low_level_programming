#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to print in binary.
 */
void print_binary(unsigned long int n)
{
	int shift = sizeof(unsigned long int) * 8 - 1;
	/* Calculate the number of bits */
	int flag = 0; /* Set a flag to skip leading zeros */

	while (shift >= 0)
	{
		unsigned long int bit = (n >> shift) & 1; /* Extract the current bit */

		if (bit || shift == 0)
		{
			_putchar(bit + '0'); /* Print the bit as a character */
			flag = 1; /* Set the flag to print all bits after the first 1 */
		}
		else if (flag)
		{
			_putchar(bit + '0'); /* Print leading zeros */
		}

		shift--;
	}
}
