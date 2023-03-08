#include "main.h"

/**
 *_pow_recursion - returns value of x raised to the power of y
 *@x: number to be given power
 *@y: power of x
 *Return: Power of x
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
	return (x * _pow_recursion(x, y - 1));
	}
}
