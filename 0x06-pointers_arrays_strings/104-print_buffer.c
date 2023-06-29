#include <stdio.h>
#include "main.h"

/**
 * print_buffer - Prints the content of a buffer
 * @b: The buffer to print
 * @size: The number of bytes to print from the buffer
 *
 * Description: This function prints the content of the buffer, with 10 bytes
 * per line, in hexadecimal and ASCII representation.
 * Each line starts with the position of the first byte in hexadecimal.
 * Each line shows the hexadecimal content (2 chars) of the buffer, 2 bytes at a time,
 * separated by a space. If a byte is not printable, a dot (.) is printed instead.
 * Each line ends with a newline character (\n).
 * If size is 0 or less, the output is a newline character (\n) only.
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
		printf("%08x: ", i);

		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
				printf("%02x", (unsigned char)b[i + j]);
			else
				printf("  ");

			if (j % 2 != 0)
				printf(" ");
		}

		printf(" ");

		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
			{
				if (b[i + j] >= 32 && b[i + j] <= 126)
					printf("%c", b[i + j]);
				else
					printf(".");
			}
			else
			{
				printf(" ");
			}
		}

		printf("\n");
	}
}

