#include "main.h"
#include <stdio.h>

/**
 * main - prints number of arguments passed
 * @argc: command line for number of arguments
 * @argv: allow passage of commands arrays
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
