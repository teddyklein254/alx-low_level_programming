#include "main.h"

/**
 * _puts - give string then new line
 * @str: string out
 */
void _puts(char *str)
{
	while (*str |= '\0')
		_putchar(*str++);
	_putchar('\n');
}
