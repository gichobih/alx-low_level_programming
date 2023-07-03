#ifndef MAIN_H
#define MAIN_H
/**_memset-fills n bytes of memory with constant values.
 *@s; pointer to memory area
 *@b; constant value
 *@n; number of bytes to fill*/
char *_memset(char *s, char b, unsigned int n);

/*
 * _memcpy - copy n bytes of memory from source to destination
 * @dest: destination
 * @src: source
 * @n: number of bytes*/
char *_memcpy(char *dest, char *src, unsigned int n);

/* -strchar- locate first char occurence in a string and return the pointer there
 * @s; string to search
 * @c; target char */
char *_strchr(char *s, char c);

/*_strspn- return the length of the string that matches the values constanly
 * @s; string to search
 * @accept; target matches */
unsigned int _strspn(char *s, char *accept);

/*_strpbrk-return pointer to the byte in s that matches the byte in accept
 * @s-string to search
 * @accept-target matches */
char *_strpbrk(char *s, char *accept);

/*_strstr-finds the first occurence of substring
 * @haystack: string to search
 * @needle: target substring to search for */
char *_strstr(char *haystack, char *needle);

/* print_chessboard - print chessboard given set 2D array
 * @a: 2D array */
void print_chessboard(char (*a)[8]);



#endif /*MAIN_H*/
