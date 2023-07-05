#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - print string with new line
 * @s: string to print
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	s++;
	_puts_recursion(s);
}
