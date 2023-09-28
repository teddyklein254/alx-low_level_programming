#include "main.h"

/**
 * _strlen_recursion - length of string
 * @s: the string
 * Return: string that wasnt returned
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
/**
 * comparator - compare charaters
 * @s: string
 * @num1: iterator first
 * @num2: second iterator
 * Return: 0
 */
int comparator(char *s, int num1, int num2)
{
	if (*(s + num1) == *(s + num2))
	{
		if (num1 == num2 || num1 == num2 + 1)
			return (1);
	return (0 + comparator(s, num1 + 1, num2 - 1));
	}
	return (0);
}
/**
 * is_palindrome - Returns if palindrome
 * @s: string fo palindrome
 * Return: if string is palindrome 1 and 0 if not palindrome
 */
int is_palindrome(char *s)
{
	if  (*s == '\0')
		return (1);
	return (comparator(sa, 0, _strlen_recursion(s) - 1));
}
