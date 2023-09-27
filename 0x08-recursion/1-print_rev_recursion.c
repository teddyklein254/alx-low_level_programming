#include "main.h"
#include <stdio.h>
/**
 * _print_rev_recursion - Printing string in reverse
 * @s: string to be printed
 */
void _print_rev_recursion(char *s)
{
	if (*s)
		_print_rev_recursion(s++);
	putchar(*s);
}
