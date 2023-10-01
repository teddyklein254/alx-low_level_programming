#include <stdio.h>
#include "main.h"
#include <stdlib.h>

int coins[] = {25, 10, 5, 2,1};
/**
 * main - prints the minimum number of coins
 * @argc: contains commands for the number of coins
 * @argv: Array for the number of coins
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int num, j, result;

	if (argc != 2)
	{
	printf("Error\n");
	return (1);
	}
	num = atoi(argv[1]);
	result = 0;
	if (num < 0)
	{
		printf("0\n");
	return (0);
	}
	for (j = 0; j < 5 && num >= 0; j++)
	{
		while (num >= coins[j])
		{
			result++;
			num -= coins[j];
		}
	}
	printf("%d\n", result);
	return (0);
}
