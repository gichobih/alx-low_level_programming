#include <stdio.h>

/**
 * print_square - Prints a square followed by a new line
 * @size: The size of the square
 */
void print_square(int size)
{
	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				putchar('#');
			}
			 putchar('\n');
		}
	}
}

