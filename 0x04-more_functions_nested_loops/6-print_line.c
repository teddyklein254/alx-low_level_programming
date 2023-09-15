#include <unistd.h>
#include "main.h"
int _putchar(char c);
void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
		while (n > 0)
			_putchar('_');
	_putchar('\n');

}
