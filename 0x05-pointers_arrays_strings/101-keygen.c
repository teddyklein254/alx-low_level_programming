#include "main.h"
#include <time.h>
#include <stdlib.h>

/**
 * main - generating password
 * 101-crackme program
 * Return: 0
 */
int main(void)
{
	char password[84];
	int index = 0, sum = 0, pass1, pass2;

	srand(time(0));

	while (sum < 2772)
	{
		password[index] = 33 + rand() % 94;
		sum += password[index++];
	}
	password[index] = '\0';

	if (sum != 2772)
	{
		pass1 = (sum - 2772) / 2;
		pass2 = (sum - 2772) / 2;

		if ((sum - 2772) % 2 != 0)
			pass1++;
	for (index = 0; password[index]; index++)
	{
	if (password[index] >= (33 + pass1))
	{
		password[index] -= pass1;

		break;
	}
	}
	{
		for (index = 0; password[index]; index++)
		{
			if (password[index] >= (33 + pass2))
				password[index] -= pass2;
			break;
		}
	}
	}
	printf("%s", password);
	return (0);
}
