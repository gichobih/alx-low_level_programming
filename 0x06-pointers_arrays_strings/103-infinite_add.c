#include "main.h"

/**
 * str_length - Calculates the length of a string.
 * @s: The input string.
 *
 * Return: The length of the string.
 *
 * Description: This function calculates the length of a null-terminated string.
 */
int str_length(char *s);

/**
 * memory_move - Copies memory area.
 * @dest: The destination memory area.
 * @src: The source memory area.
 * @n: The number of bytes to be copied.
 *
 * Return: Pointer to the destination memory area (dest).
 *
 * Description: This function copies n bytes from the source memory area to the
 *              destination memory area. It handles overlapping memory blocks correctly.
 */
char *memory_move(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	if (dest < src)
	{
		for (i = 0; i < n; i++)
			dest[i] = src[i];
	}
	else
	{
		for (i = n; i > 0; i--)
			dest[i - 1] = src[i - 1];
	}

	return dest;
}

/**
 * infinite_add - Adds two numbers.
 * @n1: The first number.
 * @n2: The second number.
 * @r: The buffer to store the result.
 * @size_r: The size of the buffer.
 *
 * Return: Pointer to the result (r) or 0 if the result cannot be stored.
 *
 * Description: This function adds two numbers represented as strings and stores
 *              the result in a buffer. The buffer size is provided as an argument.
 *              If the result cannot be stored in the buffer, the function returns 0.
 *              The function assumes that the numbers are positive or 0, and there are
 *              only digits in the input strings.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1, len2, carry, sum;
	int i, j;

	len1 = str_length(n1);
	len2 = str_length(n2);
	carry = 0;

	if (len1 + 1 > size_r || len2 + 1 > size_r)
		return 0;

	r[size_r - 1] = '\0';
	i = len1 - 1;
	j = len2 - 1;
	size_r--;

	while (i >= 0 || j >= 0 || carry)
	{
		sum = carry;

		if (i >= 0)
			sum += n1[i--] - '0';
		if (j >= 0)
			sum += n2[j--] - '0';

		carry = sum / 10;
		r[size_r--] = sum % 10 + '0';
	}

	if (size_r >= 0)
		memory_move(r, r + size_r + 1, str_length(r + size_r + 1) + 1);

	return r;
}

/**
 * str_length - Calculates the length of a string.
 * @s: The input string.
 *
 * Return: The length of the string.
 *
 * Description: This function calculates the length of a null-terminated string.
 */
int str_length(char *s)
{
	int len = 0;

	while (*s++)
		len++;

	return len;
}

