#include "main.h"

/**
 * int _islower - for printing lowercase letter
 * Return: 1. if lowercase
 * Return: 0. if otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return(1);
	else
		return(0);
}
