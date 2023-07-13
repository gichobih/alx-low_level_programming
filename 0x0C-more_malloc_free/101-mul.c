#include <stdio.h>
#include <stdlib.h>

/**
 * isNumber - Checks if a string is composed only of digits.
 * @str: The string to check.
 *
 * Return: 1 if the string is composed of digits, 0 otherwise.
 */
int isNumber(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return 0;
		i++;
	}
	return 1;
}

/**
 * multiply - Multiplies two positive numbers.
 * @num1: The first number as a string.
 * @num2: The second number as a string.
 */
void multiply(char *num1, char *num2)
{
	int len1 = 0, len2 = 0, i, j, k;
	int *result;

	while (num1[len1])
		len1++;
	while (num2[len2])
		len2++;

	result = calloc(len1 + len2, sizeof(int));

	for (i = len1 - 1; i >= 0; i--)
	{
		for (j = len2 - 1; j >= 0; j--)
		{
			int digit1 = num1[i] - '0';
			int digit2 = num2[j] - '0';
			int product = digit1 * digit2;

			result[i + j + 1] += product;
			result[i + j] += result[i + j + 1] / 10;
			result[i + j + 1] %= 10;
		}
	}

	k = (result[0] == 0) ? 1 : 0;
	for (; k < len1 + len2; k++)
		printf("%d", result[k]);
	printf("\n");

	free(result);
}

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 *
 * Return: 0 if successful, 98 on error.
 */
int main(int argc, char **argv)
{
	if (argc != 3 || !isNumber(argv[1]) || !isNumber(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	multiply(argv[1], argv[2]);

	return (0);
}

