#include "main.h"

/**
 * print_last_digit - print last digit
 * @r: input character for checking
 * Return: last digit
 */

int print_last_digit(int r)
{
	if (r > 0)
	{
	r = (r % 10);
	_putchar(r);
	return (r);
	}
	else if (r < 0)
	{
	r = r * -1;
	r = (r % 10);
	_putchar(r);
	return (r);
	}
	else
	_putchar('0');
	return (0);
}
