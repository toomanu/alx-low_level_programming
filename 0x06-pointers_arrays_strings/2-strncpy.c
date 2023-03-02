#include "main.h"

/**
 *_strncpy -    concatenates two strings
 *@dest:        first string
 *@src:         second string
 *@n:           max number of bytes from src
 *Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *temp = dest;

	while (*src && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (temp);
}
