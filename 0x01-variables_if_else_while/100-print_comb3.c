#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;

	for (a = 0; a <= 99; a++)
	{
		putchar((a / 10) + '0');
		putchar((a % 10) + '0');
		if (a != 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
