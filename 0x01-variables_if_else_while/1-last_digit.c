#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - printing random number of a variable
 * Return: 0
 * betty style doc for function main goes there
 */
int main(void)

{
	int n, lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastDigit = n % 10;
		if (lastDigit > 5)
		{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
		}
		else if (lastDigit == 0)
		{	printf("Last digit of %d is %d and is 0\n", n, lastDigit);
		}

		else if (lastDigit < 6 && lastDigit != 0)
		{
			printf("Last digit of %d is %d and is less than 6 and not 0", n, lastDigit);
			printf("\n");
		}
		return (0);
}
