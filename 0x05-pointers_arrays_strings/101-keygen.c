#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/**
 * generate_password - Generates the password "Tada! Congrats".
 *
 * Return: The generated password.
 */
char *generate_password(void)
{
    char *password = malloc(16 * sizeof(char));

    if (password == NULL)
    {
        fprintf(stderr, "Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }

    strcpy(password, "Tada! Congrats");

    return password;
}

int main(void)
{
    srand(time(NULL));

    char *password = generate_password();

    printf("Generated Password: %s\n", password);

    free(password);

    return 0;
}

