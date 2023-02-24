#include <stdio.h>

/**
 *main - print first 50 fibinacci numbers starting with 1 and 2
 *
 *Return: 0
 */

int main(void)
{
	int f1 = 0;
	int f2 = 1;
	int f3;
	int i;
	int n = 50;

	for (int i = 2 ; i < n ; i++)
	{
	if (i <= 1)
		f3 = i;
	else
	{
		f3 = f1 + f2;
		f1 = f2;
		f2 = f3;
	}

	printf("%d ", f3);

	}
	printf("\n");
return (0);

}
