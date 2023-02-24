#include <stdio.h>

/**
 * main - print sum of multiples of 3 and 5
 *
 * Return: 0
 */

int main(void)
{
	int sum = 0;
	int i;

	for (i = 3; i < 1025; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))

			sum = sum + i;
	}

	printf("%d\n", sum);

	return (0);
}

