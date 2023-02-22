#include "main.h"

/**
 * print_last_digit - print last digit
 * @n: input character for checking
 * Return: last digit
 */

int print_last_digit(int n)
{
	if (n > 0)
	{
	n = (n % 10);
	return(n);
	}
	else if (n < 0)
	{
	n = n * -1;
	n = (n % 10);
	return(n);
	}
	else
	_putchar('0');
	return (0);
}
