#include "main.h"

/**
 * _islower - checks lower case
 * c - input character for checking
 * Return: Always 0 (Success)
 */

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	return (1);
	else
	return (0);
}

