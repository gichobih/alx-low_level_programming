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


#endif /*MAIN_H*/
