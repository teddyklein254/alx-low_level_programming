#include "main.h"
#include <string.h>
/**
 * _print_rev_recursion - Printing string in reverse
 * @s: string to be printed
 */
void _print_rev_recursion(char *s)
{
	static int k = 0;
	int len = strlen(s);
	char temp;

	if (k < len / 2)
	{
		temp = s[k];
		s[k] = s[len - k - 1];
		s[len - k - 1] = temp;
		k++;

		_print_rev_recursion(s);
	}
}
