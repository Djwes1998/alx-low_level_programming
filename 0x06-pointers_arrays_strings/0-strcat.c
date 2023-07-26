#include "main.h"

/**
 * str_concat - concatenate strings
 * @s1: string dest
 * @s2: string src
 * Return: NULL if failure
 */

char* _strcat(char* dest, char* src)
{
    char* result = dest;

    while (*dest != '\0')
    {
        dest++;
    }

    while (*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }

    *dest = '\0';

    return result;
  
}
