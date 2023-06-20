#include <stdio.h>

int _isalpha(int c);

int main(void)
{
    int r;
    int n = 'A';

    r = _isalpha(n);
    printf("%d\n", r);

    return 0;
}

int _isalpha(int c)
{
    // Your implementation of _isalpha
}

