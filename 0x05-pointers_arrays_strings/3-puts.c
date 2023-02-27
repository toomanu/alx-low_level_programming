#include "main.h"

/**
 *_puts - print string
 *@str: input string for printing
 *Return: 0
 */

void _puts(char *str)
{

	int i, j;

	i = 0;

	while (str[i] != '\0')
		i++;

	for (j = 0; j <= i - 1; j++)
	{
		_putchar(str[j]);
	}

	_putchar('\n');
}

