#include <unistd.h>
/**
 * print putchar
 *
 * return on success 0
 */
int main(void)
{
	char *str = "_putchar\n";

	while (*str)
	{
	write(1, str, 1);
	str++;
        }

	return (0);
}

