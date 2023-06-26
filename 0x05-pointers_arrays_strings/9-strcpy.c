#include "main.h"
#include <stdio.h>

/**
 * _strlen - Returns the length of a string.
 * @s: String.
 */
int _strlen(char *s)
{
	int len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}

/**
 * _strcpy - Copies the string pointed to by src to the buffer pointed to by dest.
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string.
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return (dest);
}

