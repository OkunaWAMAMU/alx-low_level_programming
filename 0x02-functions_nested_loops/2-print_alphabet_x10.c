#include "main.h"
/**
 * print_alphabet_x10 - mayn code
 *
 * * Return: 0 (success)
 */
void print_alphabet_x10(void)
{
	int john;
	char vin;

	for (john = 0; john < 10; john++)
	{
		for (vin = 'a'; vin <= 'z'; vin++)
		{
			_putchar(vin);
		}
		_putchar('\n');
	}
}
