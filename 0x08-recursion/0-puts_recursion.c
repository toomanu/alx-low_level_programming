#include "main.h"

/**
 *_strcat - concatenates two strings
 *@dest: first string
 *@src: inpsecond string
 *Return: dest
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s+1);
	}
	else
	{
		_putchar('\n');
	}
}
