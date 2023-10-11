#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: name person or place
 * @f: first name
 * @*: pointer
 * Return: pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
