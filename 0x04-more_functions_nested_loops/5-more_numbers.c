#include "main.h"
#include <stdio.h>

/**
 * more_numbers - print 0 to 14 ten times
 */

void more_numbers(void)
{
	char i;
	int counter;

	for (counter = 1; counter <= 10; counter++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i / 10 > 0)
				putchar((i / 10) + '0');
			putchar((i % 10) + '0');
		}
		putchar('\n');
	}
}
