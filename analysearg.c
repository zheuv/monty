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

    while (*arg != '\0')
    {
        if (*arg != ' ')
        {
            final_instance = arg;
        }
        arg++;
    }

    if (first_instance != NULL && final_instance != NULL)
    {
        size_t length = final_instance - first_instance + 1;
        strncpy(argument, first_instance, length);
        argument[length] = '\0';
    }

    return argument;
}

