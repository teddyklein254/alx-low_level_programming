#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * argc_attribute_((unused) - print arguments
 * @argc: contains command arguments that are to be passed
 * @argv: for array arguments
 * Return: 0
 */
int main(int argc_attribute_((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
