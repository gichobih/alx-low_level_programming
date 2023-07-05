#include "main.h"

/*_pow_recursion -return the value of x raised to power y.
 * @x; The number
 * @y; The power */
int _pow_recursion(int y, int x)
{
	if(y < 0)
	return (-1);

	if(x == 0)
	return (0);

	if(x == 1 || y == 0)
	return (1);

	return (x *_pow_recursion(x,y - 1));
}
