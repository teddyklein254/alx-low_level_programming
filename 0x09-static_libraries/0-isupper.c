#include "main.h"
/**
 * _isupper - uppercase
 * @c: upper characters
 * Return: 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
