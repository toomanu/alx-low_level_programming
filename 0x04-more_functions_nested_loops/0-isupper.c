#include "main.h"

/**
 *_isupper - checks upper case
 *@c: input character for checking
 *Return: 1 if @c is upper and 0 is @c is lower/other
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
