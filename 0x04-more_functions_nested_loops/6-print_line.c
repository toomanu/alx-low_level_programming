#include "main.h"

/**
 *print_line - print straight line
 *
 *@n: number of _ to be printed
 *Return: 0
 */

void print_line(int n)
{
	int m;

	if (n > 0)
	{
		for (m = 0; m < n; m++)
		{
			_putchar('_');
		}

		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
