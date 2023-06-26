#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * generate_password - Generates a random password.
 * @length: Length of the password.
 *
 * Return: The generated password.
 */
char *generate_password(int length)
{
    static const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    char *password = malloc((length + 1) * sizeof(char));
    int i;

    if (password == NULL)
    {
        fprintf(stderr, "Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }

    for (i = 0; i < length; i++)
    {
        int index = rand() % (sizeof(charset) - 1);
        password[i] = charset[index];
    }

    password[length] = '\0';

    return password;
}

int main(void)
{
    int password_length = 10;
    char *password;

    srand(time(NULL));

    password = generate_password(password_length);

    printf("Generated Password: %s\n", password);

    free(password);

    return 0;
}

