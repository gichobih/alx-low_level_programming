#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Prints the content of a buffer
 * @b: Pointer to the buffer
 * @size: Size of the buffer
 *
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < size; i += 10)
	{
		/* Print hexadecimal address */
		printf("%08x: ", i);

		/* Print hexadecimal content */
		for (j = i; j < i + 10; j++)
		{
			if (j < size)
				printf("%02x", b[j]);
			else
				printf("  ");

			if (j % 2 != 0)
				printf(" ");
		}

		/* Print buffer content */
		for (j = i; j < i + 10; j++)
		{
			if (j >= size)
				break;

			if (b[j] >= 32 && b[j] <= 126)
				printf("%c", b[j]);
			else
				printf(".");
		}

		printf("\n");
	}
}

