#ifndef MAIN_H
#define MAIN_H


/*strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.*/
char *_strcat(char *dest, char *src);

/* _strncat - concatenate n bytes to destination string
 * @dest: string to be appended to
 * @src: string to append
 * @n: append n number of bytes(chars)*/
char *_strncat(char *dest, char *src, int n);

/*_strncpy - copies n bytes of a source into buffer of a destination string,
 * @dest: copy source to this buffer
 * @src: this is the source to copy
 * @n: n bytes to be copied*/
char *_strncpy(char *dest, char *src, int n);

/*_strcmp - compare two strings
 * @s1: one string
 * @s2: one string*/
int _strcmp(char *s1, char *s2);

/*reverse_array - reverse array elements
 * @a: array
 * @n: number of elements in array*/
void reverse_array(int *a, int n);

/*string_toupper - capitalize all letters in string
 * @s: string to manipulate*/
char *string_toupper(char *);

/*cap_string - capitalize first letter of each word
 * @s: string to manipulate*/
char *cap_string(char *);

/** leet - encode string into 1337 leet
 * @s: string to manipulate*/
char *leet(char *);

/*rot13 - encode string using rot13
 * @s: string to encode*/
char *rot13(char *);

/*print_number - print an integer, without using long, arrays, or pointers
 * @n: number to be printed*/
void print_number(int n);

/*infinite_add - Adds two numbers. @n1: The first number.@n2: The second number.
 * @r: The buffer to store the result. @size_r: The size of the buffer.*/
char *infinite_add(char *n1, char *n2, char *r, int size_r);

#endif /* MAIN_H*/
