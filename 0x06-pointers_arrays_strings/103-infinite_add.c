#include <stdio.h>
#include <string.h>
/**
 * infinite_add - add 2 strings.
 * @n1: string1.
 * @n2: string2.
 * @r: buffer
 * @size_r: buffer size
 * Return: String with all letters in ROT13 base.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r) 
{
    int len_n1 = strlen(n1);
    int len_n2 = strlen(n2);
    int carry = 0;
    int max_length = size_r - 1;
    int i, j, k;

    memset(r, '0', size_r);
    r[size_r - 1] = '\0';

    i = len_n1 - 1;
    j = len_n2 - 1;
    k = max_length - 1;

    while (i >= 0 || j >= 0 || carry > 0) 
    {
        int digit_sum = carry;

        if (i >= 0) 
	{
            digit_sum += n1[i] - '0';
            i--;
        }

        if (j >= 0) 
	{
            digit_sum += n2[j] - '0';
            j--;
        }

        if (k < 0) 
	{
            return 0;
        }

        carry = digit_sum / 10;
        r[k] = (digit_sum % 10) + '0';
        k--;
    }

    if (k >= 0) 
    {
        memmove(r, &r[k + 1], max_length - k);
    }

    return r;
}
