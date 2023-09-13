#include "main.h"
#include <stdio.h>

/**
 * check - evry minute of jack Bauer
 * Return: 0
 */
void jack_bauer(void)
{
	int min_1, min_2, min_3, min_4;
		for(min_1 = 0; min_1 <= 2; min_1++)
		for  (min_2 = 0; min_2 <=9; min_2++)
		if ((min_1 <= 1 && min_2 <= 9) || (min_1 <= 2 && min_2 <= 3))

			for (min_3 = 0; min_3 <= 5; min_3++)
					for (min_4 = 0; min_4 <= 9; min_4++)
						putchar(min_1 + '0');
					putchar(min_2 + '0');
					putchar(58);
					putchar(min_3 + '0');
					putchar(min_4 + '0');
					putchar('\n');
}
