#include "main.h"

/**
 * check - code for runing uppercase
 * @c uppercase return 1 else 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return 1;
	else
		return 0;
}
