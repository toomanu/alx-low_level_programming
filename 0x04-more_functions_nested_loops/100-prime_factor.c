#include <stdio.h>
#include <math.h>

/**
 *main - find and print largest prime number
 *
 *
 *Return: 0
 */

int main(void)
{
	long int n = 612852475143;
	int largest = -1;
	int i;

	while (n % 2 == 0)
	{
		largest = 2;
		n = n / 2;
	}

	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
			largest = i;
			n = n / i;
		}
	}

	if (n > 2)
	{
		largest = n;
	}

	printf("%d\n", largest);

	return (0);
}
