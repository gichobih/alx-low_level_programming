#include "main.h"
/**
 * print ten times the alphabets in lower case followed by new line
 */
void print_alphbates(void)
{
	char letter = 'a', x;

	while(x >= 10)
        {
                _putchar("\n");

                x++;
        }

	while(letter <= 'z')
	{
		_putchar(letters);

		letters++;
	}	
        
	_putchar('\n');
	while(x >= 10)
	{
		_putchar("\n");

		x++;
	}

}
