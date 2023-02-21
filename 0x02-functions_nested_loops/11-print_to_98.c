#include "main.h"
#include <stdio.h>

/**
 * add - returns absolute value of integer
 * @a: first value
 * @b: second value
 * Return: additonal of a and b and return c
 */

void print_to_98(int n)
{
	int a;

	for (a = n; a < 99; a++)
	{

		printf("%d", a);
		if (a != 98)
		{
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
}

