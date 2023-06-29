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

#endif /* MAIN_H*/
