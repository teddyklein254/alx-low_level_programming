#include "main.h"

/**
 * rot13 - Contain the encoding characters
 * @s: characters for encoding
 * Return: Always
char *rot13(char *s)
{
	int num1, num2;

	char set1[] = "ABCDEFGHIJKLMOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char setrot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (num1 = 0; s[num1] != '\0'; num1++)
	{
	for (num2 = 0; num2 < 52; num2++)
	{
		if (s[num1] == set1[num2])
	{
		s[num1] = setrot[num2];
	break;
	}
	}
	}

	return (s);
}
