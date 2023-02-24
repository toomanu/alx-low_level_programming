#include "main.h"

/**
 * print_times_table - checks if letter is an alphabet
 * @n: input character for multiplying
 * Return: 0
 */

void print_times_table(int n)
{
	int m;
	int p;

	for (n = '0'; n < '9'; n++)
	{
		for (m = '0'; m < '9'; m++)
		{
			p = m * n;
		_putchar(p);
		_putchar(',');
		}
	}


}

