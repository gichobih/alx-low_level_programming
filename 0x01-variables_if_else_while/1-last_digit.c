#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
	int n;

	srand(time(0)); /* Seed the random number generator */

	n = rand() % 10; /* Generate a random number from 0 to 9 */

	printf("Last digit of ");

	/* Print the original number (for reference) */
	printf("%d is %d ", n, n);

	if (n > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (n == 0)
	{
		printf("and is 0\n");
	}
	else
	{
		printf("and is less than 6 and not 0\n");
	}

	return (0);
}

