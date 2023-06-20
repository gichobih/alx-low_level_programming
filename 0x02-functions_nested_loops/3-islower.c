#include <stdio.h>

int test_islower(int c);

int main(void)
{
    char ch = 'a';
    if (test_islower(ch))
        printf("Character is lowercase.\n");
    else
        printf("Character is not lowercase.\n");

    return 0;
}

