#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Check if random number is postive or negative
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int lstd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lstd = n % 10;
	if (lstd > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lstd);
	}
	if (lstd == 0)
	{
		printf("Last digit of %d is 0 and is 0\n", n);
	}
	if (lstd < 6 && lstd != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lstd);
	}
	return (0);
}
