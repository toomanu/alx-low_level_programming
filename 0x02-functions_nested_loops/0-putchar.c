#include "main.h"

/**
 * main - program that prints _putchar, followed by a new line
 *
 * Return: Always 0.
 */
int main(void)
{
	char ch[9] = "_putchar";
	int i = 0;

	for (i = 0; i <= 9; i++)
	{
		_putchar(ch[i]);
	}
	_putchar('\n');
	return (0);
}
