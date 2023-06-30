#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * infinite_add - this function adds two number
 * @n1: first number to add
 * @n2: second number to add
 * @r: a pointer to the buffer
 * @size_r: the buffer size
 * Return: return value is a pointer calling a function
 **/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int len1 = strlen(n1);
    int len2 = strlen(n2);
    int carry = 0;
    int i = len1 - 1;
    int j = len2 - 1;


    if (len1 + 1 > size_r || len2 + 1 > size_r)
        return 0;

    r[size_r - 1] = '\0';

    while (i >= 0 || j >= 0 || carry)
    {
        int sum = carry;

        if (i >= 0)
            sum += n1[i--] - '0';
        if (j >= 0)
            sum += n2[j--] - '0';

        carry = sum / 10;
        r[--size_r] = (sum % 10) + '0';

        if (size_r == 0 && (i >= 0 || j >= 0 || carry))
            return 0;
    }

    return &r[size_r];
}


