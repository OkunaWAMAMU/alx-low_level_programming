#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char.
 * @s: this is a pointer to a pointer to a char.
 * @to: this is a Pointer to a char.
 * return: return value is void
 */
void set_string(char **s, char *to)
{
	*s = to;
}

