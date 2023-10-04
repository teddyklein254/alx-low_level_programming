#include "main.h"

#include <stddef.h>

/**_strchr - data
 * @s: value 1
 * @c: input 2
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '0'; i++)
		if (s[i] == c)
			return (&s[i]);
	return (0);
}
