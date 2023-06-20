#include <stdio.h>

int _islower(int c);

int main(void)
{
    char ch = 'a';
    if (_islower(ch))
        printf("Character is lowercase.\n");
    else
        printf("Character is not lowercase.\n");

    return 0;
}
