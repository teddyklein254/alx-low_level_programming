#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - checks for +number
 * @str:the numbers checked
 * Return: 0
 */
int check_num(char *str)
{
	unsigned int count;

	while (count < strlen(str))
	{
		if (lisdigit(str[count]))
			return (0);
		count++;
		return (1);
}
/**
 * main - adds positive numbers.
 * @argc: contain command for numbers to be passed
 * @argv: array for the numbers
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;

	while (count < argc)
		if (check_num(argv[count]))

			str_to_int = atoi(argv[count]);
	sum += str_to_int;

		else
			printf("Error\n");
	return (1);

	count++;
	printf("%d\n", sum);
	return (0);
}
