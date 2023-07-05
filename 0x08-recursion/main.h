#ifndef MAIN_H
#define MAIN_H
/*_print_rev_recursion- prints string in reverse.
 * @s; is the string to print*/
void _puts_recursion(char *s);

/*_print_rev_recursion- prints string in reverse.
 * @s; is the string to print*/
void _print_rev_recursion(char *s);

/*_strlen_recursion - prints the length of the string .
 * @s- is the string*/
int _strlen_recursion(char *s);

/*int_factorial- Return the factorial of a given number.
 * @n ; the number*/
int factorial(int n);

/*_pow_recursion- Returns the value the value of x raised to power of y.
 * @x; the number
 * @y; power to raise to. */
int _pow_recursion(int x, int y);

/*_sqrt_recursion- Return the natural squre root of a number.
 * @n ; Number */
int _sqrt_recursion(int n);

/*is_prime_number- Returns 1 if the interger is prime number, otherwise it retun 0
 * @n; number */
int is_prime_number(int n);

/*compare - compare head and tail indices for match
 * @head: index starting from left of string
 * @tail: index starting from right of string, moving backwards */
int is_palindrome(char *s);



#endif /*MAIN_H*/
