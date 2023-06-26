#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: Pointer to the string to be reversed.
 *
 * Return: None.
 */
void rev_string(char *s)
{
	int i, j;
	char temp;

	/* Find the length of the string */
	for (i = 0; s[i] != '\0'; i++)
		;

	/* Reverse the string */
	for (i -= 1, j = 0; j < i; j++, i--)
	{
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
	}
}

