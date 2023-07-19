#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * get_op_func - selects the correct function to perform the operation asked by the user.
 * @s: The operator passed as argument to the program
 * Return: Pointer to the corresponding function or NULL if not found.
 */
int (*get_op_func(char *s))(int, int)
{
    op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i = 0;

    while (ops[i].op != NULL)
    {
        if (*(ops[i].op) == *s && *(s + 1) == '\0')
            return (ops[i].f);
        i++;
    }
    printf("Error\n");
    exit(99);
}

