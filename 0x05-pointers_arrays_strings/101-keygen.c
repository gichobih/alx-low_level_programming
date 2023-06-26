#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * generate_password - Generates a specific password.
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

