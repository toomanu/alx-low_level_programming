#include "main.h"

/**
 *_isdigit - checks digit character (0 - 9)
 *@c: input character for checking
 *Return: 1 if @c is digit and 0 is @c is other
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
