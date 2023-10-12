#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - display strings
 * @separator: string printed btwn functions
 * @n: number of strings to be passed
 * @...: continuation of number of th strings
 * Return: NULL
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	char *str;
	unsigned int index;
	
	va_start(string, n);
	for (index = 0; index < n; index++)
	{
		str = va_arg(string, char *);
	if (str == NULL)
		printf("(nil)");
	else
		printf("%s", str);
	if (index < n - 1 && separator != NULL)
		printf("%s", separator);
	}
	printf("\n");
	va_end(string);
}
