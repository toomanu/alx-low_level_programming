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

	for (a = 'a'; a <= 'z'; a++)
		if (a != 'e')
			if (a != 'q')
			{
			putchar(a);
			}
	putchar('\n');
	return (0);
}
