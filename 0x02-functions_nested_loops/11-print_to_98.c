#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - returns absolute value of integer
 * @n: number start
 * Return: Numbers
 */

void print_to_98(int n)
{
	int a;
	if (n < 99)
	{
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
	else
	
	{
		for (a = n; a > 97; a--)
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
}
