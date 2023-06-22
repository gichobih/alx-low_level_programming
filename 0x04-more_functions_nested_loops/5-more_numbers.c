#include <stdio.h>

/**
 * more_numbers - Prints 10 times the numbers from 0 to 14, followed by a new line
 */
void more_numbers(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
				putchar((i / 10) + '0');

			putchar((i % 10) + '0');
		}

		putchar('\n');
	}
}

