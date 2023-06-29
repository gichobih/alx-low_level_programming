#include "main.h"
#include <stdio.h>

/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 *
 * Description: This function prints an integer using only the _putchar function.
 */
void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		putchar('-');
		num = -n;
	}
	else
	{
		num = n;
	}

	if (num / 10 != 0)
	{
		print_number(num / 10);
	}

	putchar((num % 10) + '0');
}

