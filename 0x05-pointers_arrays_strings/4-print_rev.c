#include "main.h"
#include <stdio.h>
/**
 * print_rev - Prints a string in reverse followed by a new line.
 * @s: Pointer to the string to be printed.
 *
 * Return: None.
 */
void print_rev(char *s)
{
	int len = 0;

	/* Find the length of the string */
	while (s[len] != '\0')
		len++;

	/* Print the string in reverse order */
	for (len -= 1; len >= 0; len--)
		putchar(s[len]);

	putchar('\n');
}

