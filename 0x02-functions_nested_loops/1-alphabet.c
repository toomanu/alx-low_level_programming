#include "main.h"

/**
 * print_alphabet - print alphabet in lower case
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
