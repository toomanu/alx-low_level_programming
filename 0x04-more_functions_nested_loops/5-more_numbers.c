#include "main.h"

/**
 *more_numbers - print 0 - 9 followed by new line except 2 and 4
 *
 *Return: 0
 */

void more_numbers(void)
{
	int i;
	int j = 0;
	char c[100] = "1234567891011121314";

	while (j < 10)
	{
		for (i = 0; i < 18; i++)
		{
			_putchar(c[i]);
		}

		_putchar('\n');
		j++;
	}
}
