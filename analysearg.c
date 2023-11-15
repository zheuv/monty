#include "monty.h"

char* analysearg(char *arg)
{
    char *argument = malloc(MAX_LINE_LENGTH);
    char *first_instance = NULL;
    char *final_instance = NULL;

    while (*arg == ' ')
    {
        arg++;
    }
    first_instance = arg;

    while (*arg != '\0' && *arg != '\n')
    {
        if (*arg != ' ')
        {
            final_instance = arg;
        }
        arg++;
    }

    while (first_instance <= final_instance)
    {
        strncat(argument, first_instance, 1);
        first_instance++;
    }

    return argument;
}

