#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *print_number - Print integers
 *
 * @n: integer to be printed
 *Return: 0
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10)
	{
		print_number(n / 10);
	}

	_putchar(n % 10 + '0');
}
