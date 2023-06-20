/**
 * _isalpha - Checks if a character is an alphabetic letter.
 * @c: The character to be checked.
 *
 * Return: 1 if c is an alphabetic letter (lowercase or uppercase),
 *         0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

