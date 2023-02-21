#include "main.h"

/**
 * _islower - checks lower case
 * @c: input character for checking
 * Return: 0 if @c is lower
 */

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	return (1);
	else
	return (0);
}

