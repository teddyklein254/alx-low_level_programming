#include "main.h"
#include <stdio.h>

/**
 * main -  prints all arguments it receives.
 * @argv: contain commands for the passage
 * @argc: Arrays to be passed
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int k;

	for (k = 0; k < argc; k++)
		printf("%s\n", argv[k]);
	return (0);
}
