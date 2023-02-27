#include "main.h"

/**
 *void swap_int - takes a pointer returns value it points to to 98
 *@a: input character for swap
 *@b: input character for swap
 *Return: n
 */

void swap_int(int *a, int *b)
{
	int temp;
	
	temp = *b;
	*b = *a;
	*a = temp;
}
