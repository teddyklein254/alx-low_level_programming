#include "main.h"

/**
 * check - for alphabetic character
 * @c or @C return 1 else 0
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
