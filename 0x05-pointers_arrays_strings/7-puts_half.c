#include "main.h"
/**
 * puts_half - prints second half of string
 * @str: string obtained
 * Return: void
 */
void puts_half(char *str)
{
	int j = 0;
	int k;

	while (str[j] != '\0')
	{
		j++;
	}
	if (j % 2 == 1)
	{
	k = (j - 1) / 2;
	k += 1;
	}
	else
	{
	k = j / 2;
	}
	while (str[k] != '\0')
	{
	_putchar(str[k]);
	k++;
	}
	_putchar('\n');
}
