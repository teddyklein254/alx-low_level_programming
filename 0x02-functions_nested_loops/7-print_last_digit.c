#include  "main.h"
/**
 * check - last digit number
 * print_last_digit - gives out last digit
 * Return: last digit
 */

int print_last_digit(int r)
{
	int last;
	last = r%10;
	if (last < 0)
		last = last * -1;
	_putchar(last + '0');
	return(last);
}
