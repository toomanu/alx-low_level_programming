#include "main.h"

/**
 *print_numbers - print 0 - 9 followed by new line
 *
 *Return: 0
 */

void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
