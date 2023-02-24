#include <stdio.h>

/**
 * main - print first 50 fibinacci numbers starting with 1 and 2
 *
 * Return: 0
 */

int main()
{
	int f1 = 0;
	int f2 = 1;
	int f3;
	int i;
	int n = 50;
 
	for (i = 2; i < n; i++)
	{
		f3 = f1 + f2;
		printf("%d ", f3);
		f1 = f2;
		f2 = f3;
	}
	printf("\n");
	return (0);
}
