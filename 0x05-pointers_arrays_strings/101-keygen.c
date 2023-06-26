#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/**
 * generate_password - Generates a random valid password.
 *
 * Return: The generated password.
 */
char *generate_password(void)
{
    char *password = malloc(17 * sizeof(char));
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int i;

    if (password == NULL)
    {
        fprintf(stderr, "Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }

    srand(time(NULL));

    for (i = 0; i < 16; i++)
    {
        int index = rand() % (sizeof(charset) - 1);
        password[i] = charset[index];
    }

    password[16] = '\0';

    return password;
}

int main(void)
{
    char *password;

    password = generate_password();

    printf("%s\n", password);

    free(password);

    return 0;
}

