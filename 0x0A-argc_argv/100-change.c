#include <stdio.h>
#include <stdlib.h>

/**
 * calculate_coins - calculates the minimum number of coins required
 * to make change for a given amount
 * @cents: the amount in cents
 *
 * Return: the minimum number of coins required
 */
int calculate_coins(int cents)
{
	int coins = 0;

	if (cents <= 0)
		return (0);

	while (cents >= 25)
	{
		cents -= 25;
		coins++;
	}

	while (cents >= 10)
	{
		cents -= 10;
		coins++;
	}

	while (cents >= 5)
	{
		cents -= 5;
		coins++;
	}

	while (cents >= 2)
	{
		cents -= 2;
		coins++;
	}

	while (cents >= 1)
	{
		cents -= 1;
		coins++;
	}

	return (coins);
}

/**
 * main - entry point of the program
 * @argc: the argument count
 * @argv: an array of pointers to the program arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int cents, result;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	result = calculate_coins(cents);
	printf("%d\n", result);

	return (0);
}

