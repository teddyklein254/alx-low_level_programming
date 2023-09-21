#include "main.h"

/**
 * string_toupper - changes lowercase to uppercase
 * @str: characters the alphabets
 * Return: 0
 */
char *string_toupper(char *str)
{
	int index = 0;
	{
	while (str[index])
	if (str[index] >= 'a' && str[index] <= '2')
	str[index] -= 32;
	index++;
	}
	return (str);
}
