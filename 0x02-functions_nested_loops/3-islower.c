#include "main.h"

/**
 * check - if c is lowercase letter
 * @c return 1 if lowercase and 0 if not
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
