#include "main.h"

/**
 *_strlen - funtion to retrun string length
 *@s: input character for swap
 *Return: i length of string
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}

