#include "main.h"

/**
 * _isalpha - checks if letter is an alphabet
 * @c: input character for checking
 * Return: 1 if @c is alphabet
 */

void print_times_table(int n)
{
	int m;
	int p;
	for ( n = '0'; n < '9'; n++)
	{
		for ( m = '0'; m < '9'; m++)
		{
			p = m * n;
		_putchar(p);
		_putchar(',');
		}
	}


}

