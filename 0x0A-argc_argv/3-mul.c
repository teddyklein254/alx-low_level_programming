#include "main.h"
#include <stdio.h>

/**
 * _atoi - change strings to integers
 * @s: string converted to integer
 * Return:0
 */
int _atoi(char *s)
{
	int k, l, m, leng, n, number;
	{
	k = 0;
	l = 0;
	m = 0;
	leng = 0;
	n = 0;
	number = 0;
	}

	while (s[leng] != '\0')
		leng++;
	while (k < leng && n == 0)
		if (s[k] == '-')
			l++;
	if (s[k] >= '0' && s[k] <= '9')
		number = s[k] - '0';
	if (l % 2)
		number = -number;
	m = m * 10 + number;
	n = 1;
	if (s[k + 1] < '0' || s[k + 1] > '9')
		break;
	f = 0;
	k++;

	if (n == 0)
		return (0);
	return (n);
}

/**
 * main - multiplies two numbers
 * @argc: command line for numbers
 * @argv: array for numbers
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;
	{
		if (argc < 3 || argc > 3)
		printf("Error\n");
	}
	result(1);
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;
	printf("%d\n", result);
	return (0);
}
