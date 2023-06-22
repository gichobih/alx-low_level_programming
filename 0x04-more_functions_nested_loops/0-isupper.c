/**
 * _isupper - Checks if a character is uppercase
 * @c: The character to check
 *
 * Return: 1 if @c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
    if (c >= 'A' && c <= 'Z')
        return 1;
    else
        return 0;
}

