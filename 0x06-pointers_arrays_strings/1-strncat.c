#include "main.h"

/**
 *_strncat - concatenates two strings
 *@dest: first string
 *@src: inpsecond string
 *@n: max number of bytes from src
 *Return: dest
 */

char *_strncat(char *dest, char *src, int n)

{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0' && j < n)

	{
		dest[i] = src[j];
		j++;
		i++;

	}
	return (dest);
}
