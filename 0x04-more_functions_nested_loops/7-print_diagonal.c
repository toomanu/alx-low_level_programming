#include "main.h"

/**
 *print_diagonal - print square with #
 *
 *@n: number of _ to be printed
 *Return: 0
 */

void print_diagonal(int n)

{
	int i;
	int j;


if (n > 0)
{
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (j < i)
			{
				_putchar(' ');
			}
			else if (j == i)
			{
				_putchar('\\');
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
