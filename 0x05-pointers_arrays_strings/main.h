#ifndef MAIN_H
#define MAIN_H

/* reset_to_98 - Updates the value pointed to by the pointer to 98.
 * @n: Pointer to an integer.*/
void reset_to_98(int *n);

/*swap_int - to swap integers 
 * @a;integer a and @b integer b */
void swap_int(int *a, int *b);

/*int_strlen; Returns the lenghth of a string*/
int _strlen(char *s);

/*prints a string followed by a new  line*/
void _puts(char *str);

/*void print_reverse; prints a string in reverse followed by a new line*/
void print_rev(char *s);

/*void rev_string; reverses a string*/
void rev_string(char *s);

/*void puts2(char *str); prints every character of the string starting with the first
 * character followed by new line*/
void puts2(char *str);

/*void puts_half(char *str); prints half of the string followed by new line
 */
void puts_half(char *str);

#endif /* MAIN_H */

