#include "main.h"

/**
 *_strcat - concatenates two strings
 *@dest: first string
 *@src: inpsecond string
 *Return: dest
 */

char *_strcat(char *dest, char *src)

{
	while (*dest)
	{
		dest++;
	}

	while (*src)
	{
		src++;
		dest++;
	}

	return (dest);
}
