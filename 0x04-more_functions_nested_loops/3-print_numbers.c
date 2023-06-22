#include <stdio.h>

/**
 * print_numbers - Prints the numbers from 0 to 9 followed by a new line
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
}

