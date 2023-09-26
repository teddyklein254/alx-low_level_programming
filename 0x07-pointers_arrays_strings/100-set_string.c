#include "main.h"
#include <stdio.h>
/**
 * set_string - Setting char to pointer
 * @s: the value to be ste
 * @to: where its directed to
 */
void set_string(char **s, char *to)
{
	char x;

	x = **s;
	**s = *to;
	*to = x;

	printf("%c" ,**s);
}
