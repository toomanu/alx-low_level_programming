#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
		if (a != 10)
			putchar(',');
			putchar(' ');
	}
	putchar('\n');
	return (0);
}
