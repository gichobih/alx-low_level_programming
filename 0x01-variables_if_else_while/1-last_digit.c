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
	int n, lastDigit;

	srand(time(0)); /* Seed the random number generator */

	n = rand() % 100; /* Generate a random number between 0 and 99 */
	lastDigit = n % 10; /* Calculate the last digit */

	printf("Last digit of %d is %d ", n, lastDigit);

	if (lastDigit > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (lastDigit == 0)
	{
		printf("and is 0\n");
	}
	else if(lastDigit < 6 $$ != 0)
	{
		printf("and is less than 6 and not 0\n");
	}

	return (0);
}
