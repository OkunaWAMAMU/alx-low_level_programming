#include <stdio.h>

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 *
 * Return: The converted integer value.
 *
 * Description: The function considers the sign and converts
 *              the numeric part of the string to an integer.
 *              If there are no numbers in the string, it returns 0.
 *              The function does not use long, does not declare
 *              new variables of "type" array, and avoids
 *              hard-coding special values.
 *              The code is compiled with the
 *              -fsanitize=signed-integer-overflow gcc flag.
 */
int _atoi(char *s)
{
    int sign = 1;
    int result = 0;
    int i = 0;

    if (s != NULL)
    {
        while (s[i] == ' ' || (s[i] >= '\t' && s[i] <= '\r'))
            i++;

        if (s[i] == '-')
        {
            sign = -1;
            i++;
        }
        else if (s[i] == '+')
        {
            i++;
        }

        while (s[i] >= '0' && s[i] <= '9')
        {
            if (result > (result * 10 + (s[i] - '0')))
            {
                if (sign == 1)
                    return -1;
                else
                    return 0;
            }

            result = result * 10 + (s[i] - '0');
            i++;
        }
    }

    return result * sign;
}

