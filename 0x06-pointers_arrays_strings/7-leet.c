#include "main.h"

/**
 * leet - 1337 encode
 * @n: value inputted
 * Return: n value
 */
char *leet(char *n)
{
	int letter, digit;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (letter = 0; n[letter] != '\0'; letter++)
	{
		for (digit = 0; digit < 10; digit++)
			if (n[letter] == s1[digit])
				n[letter] = s2[digit];
	}
	return (n);
}
