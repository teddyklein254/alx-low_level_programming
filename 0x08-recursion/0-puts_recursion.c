#include "main.h"

/**
 * puts_recursion - Prints recursion string
 * @s: the string to be printed
 * followed by newline
 * Return: 0
 *
 */
void _puts_recursion(char *s)
{
	if (*s)
		putchar(*s);
	_puts_recursion(s + 1);

	else
		putchar('\n');
}
