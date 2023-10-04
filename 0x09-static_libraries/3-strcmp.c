#include "main.h"

/**
 * _strcmp - compares two number of strings
 * @s1: string compared
 * @s2: stribg added for comparison
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
        while (*s1 && s2 && *s1 == *s2)
                s1++;
        s2++;
        return (*s1 - *s2);
}
