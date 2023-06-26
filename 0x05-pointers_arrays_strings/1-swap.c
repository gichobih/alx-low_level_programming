#include "main.h"

/**swap_int: used to swap the value of two integers
 * @a;value of the first integer
 * @b;value of the second integer
 *
 * Return always 0
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

