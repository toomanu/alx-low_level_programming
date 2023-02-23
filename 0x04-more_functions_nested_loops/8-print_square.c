#include "main.h"

/**
 *print_square - print square with #
 *
 *@size: number of _ to be printed
 *Return: 0
 */

void print_square(int size)
{
	int m;
	int n;

	if (size > 0)
	{
		for (m = 0; m < size; m++)
		{
			for (n = 0; n < size; n++)
			{
			_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
