#include "main.h"
#include <stdio.h>
/**
 * _strstr - locates substring
 * @haystack: first occurence of substring
 * @needle: where string for haystack located
 * Return: NULL
 */
char *_strstr(char *haystack, char *needle)
{
        char *a, *b;

        for (; *haystack != '\0'; haystack++)
        {
        a = haystack;
        b = needle;
        while (*a == *b && *b != '\0')
        {
        a++;
        b++;
        }
        if (*b == '\0')

                return (haystack);
        }
        return (NULL);
}
