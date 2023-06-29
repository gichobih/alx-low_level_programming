#include "main.h"
#include <stdio.h>

/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 */
void print_number(int n)
{
	char digit;

	if (n < 0)
	{
		putchar('-');
		n = -n;
	}

	if (n / 10 != 0)
		print_number(n / 10);

	digit = (n % 10) + '0';
	putchar(digit);
}

