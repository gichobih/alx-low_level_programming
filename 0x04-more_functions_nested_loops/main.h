#ifndef MAIN_H
#define MAIN_H
/*_isupper: check if the character is uppercase
 * @c is the character to check*/
int _isupper(int c);

/*_isdigit: checks if the character is a digit (0-9)
 * @c is the character to be checked*/
int _isdigit(int c);

/*mul: multiplies two intergers
 * @a:the first integer
 * @b:the second integer*/
int mul(int a, int b);

/*prints number from (0-9)followed by new line*/
void print_numbers(void);

/*print most: prints numbers from 0 to 9 followed by new line except 2 and 4
 */
void print_most_numbers(void);

/*more_numbers: print 10 times the number from 0-14 followed by new line*/
void more_numbers(void);

/*print_line: draws a straight line in the terminal
 * @n: The number of times the character '_' should be printed*/
void print_line(int n);

/*print_diagonal - Draws a diagonal line in the terminal
 * @n: The number of times the character '\' should be printed*/
void print_diagonal(int n);

/* print_square - Prints a square followed by a new line
 * @size: The size of the square*/
void print_square(int size);

/* print_triangle - Prints a triangle followed by a new line
 * @size: The size of the triangle*/
void print_triangle(int size);

/* print_number - Prints an integer
 * @n: The integer to be printed*/
int _putchar(char c);
void print_number(int n);

#endif /* MAIN.H */
