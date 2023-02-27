#include "main.h"

/**
 *print_rev - print reverse of string
 *@s: input string for reverse
 *Return: 0
 */

void print_rev(char *s)
{

	int i, j;

	i = 0;

	while (s[i] != '\0')
		i++;

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}

	_putchar('\n');
}

