#include <stdio.h>

/**
 * main - print first 50 fibinacci numbers starting with 1 and 2
 *
 * Return: 0
 */

int main(void)
{
	int i;
	int n = 50;

	int f1 = 1, f2 = 2;

	int f3 = f1 + f2;


	printf("%d, %d, ", f1, f2);

	for (i = 3; i <= n; ++i)
	{
		printf("%d, ", f3);
		f1 = f2;
		f2 = f3;
		f3 = f1 + f2;
	}

	return (0);
}
