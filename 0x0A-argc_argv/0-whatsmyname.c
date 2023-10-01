#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * @argc: contains command arguments that are to be passed
 * @argv: for array arguments
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
