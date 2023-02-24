#include "main.h"

/**
 *print_triangle - print square with #
 *
 *@size: number of _ to be printed
 *Return: 0
 */

void print_triangle(int size)

{
	int i;
	int j;


if (size > 0)
{
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (j < size - i - 1)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
		}

		_putchar('\n');
	}
}
else
{
	_putchar('\n');
}


}
