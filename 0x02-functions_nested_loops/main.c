#include "main.h"

int _putchar(char c);

int main(void)
{
	char ch = 'a';
	char result = (_islower(ch) ? '1' : '0');

	_putchar(result);
	_putchar('\n');

	return 0;
}

