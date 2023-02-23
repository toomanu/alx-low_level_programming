#include "main.h"

/**
 *print_most_numbers - print 0 - 9 followed by new line except 2 and 4
 *
 *Return: 0
 */

void more_numbers(void)
{
	int i;
	int j = 0;
	while (j < 11)
	{
	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}

	for (i = '1'; i <= '4' ; i++)
	{
		_putchar('1');
		_putchar(i);

	}
	j++;
	_putchar('\n');
	}
}
