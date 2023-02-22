#include "main.h"

/**
 * print_alphabet_x10 - print alphabet in lower case 10 times
 *
 * Return: Always 0 (Success)
 */

void times_table(void)
{
	int a, b, c;
	for (a = 0; a <= 9; a++)
	{
	for (b = 0; b <= 9; b++)
	{
		c = a * b;
		_putchar(a);
		_putchar(b);
		_putchar(c);
	}
	}
	_putchar('\n');
}
