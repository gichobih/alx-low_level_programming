#include "main.h"
#include <stdio.h>
/**
 * puts2 - Prints every other character of a string followed by a new line.
 * @str: Pointer to the string to be printed.
 *
 * Return: None.
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		putchar(str[i]);

		if (str[i + 1] == '\0')
			putchar('\n');
		else
			putchar(' ');
	}
}

