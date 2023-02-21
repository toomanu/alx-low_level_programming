#include "main.h"

/**
 * _isalpha - checks if letter is an alphabet
 * @c: input character for checking
 * Return: 1 if @c is alphabet
 */

int _isalpha(int c)
{

	if (c >= 'a' && c <= 'z')
	return (1);
	else if (c >= 'A' && c <= 'Z')
	return (1);
	else
	return (0);
}

