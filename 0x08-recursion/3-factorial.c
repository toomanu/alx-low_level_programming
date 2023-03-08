#include "main.h"

/**
 *factorial - returns factorial of a number
 *@n: factorial number
 *Return: Factorial
 */

int factorial(int n) 
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
	return (n * factorial(n - 1));
	}
}
