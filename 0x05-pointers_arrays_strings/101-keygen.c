#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/**
 * generate_password - Generates a random password.
 *
 * Return: The generated password.
 */
char *generate_password(void)
{
    char *password = malloc(11 * sizeof(char));
    int i;

    if (password == NULL)
    {
        fprintf(stderr, "Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }

    srand(time(NULL));

    for (i = 0; i < 10; i++)
    {
        password[i] = rand() % 94 + 33;  /* ASCII printable characters */
    }
    password[10] = '\0';

    return password;
}

/**
 * main - Entry point of the program.
 *
 * Return: 0 on success.
 */
int main(void)
{
    char *generated_password = generate_password();
    char *solution = "Tada! Congrats";

    if (strcmp(generated_password, solution) == 0)
    {
        printf("Generated password matches the solution: %s\n", generated_password);
    }
    else
    {
        printf("Generated password does not match the solution: %s\n", generated_password);
    }

    free(generated_password);

    return 0;
}

