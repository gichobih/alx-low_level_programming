#include "main.h"

int _putchar(char c);
int _islower(int c);

void test_islower(int n)
{
	int r;

	r = _islower(n);
	_putchar(r + '0');
	_putchar('\n');
}

