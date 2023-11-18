#include "monty.h"

char* analysearg(char *token)
{
    char *argument ;
    char *first_instance = NULL;
    char *final_instance = NULL;

    while ((*token != '\0') && ((*token == ' ') ||(*token == '\t')))
    {
        token++;
    }

    first_instance = token;

    while (*token != '\0')
    {
        if ((*token != ' ') && (*token != '\t'))
        {
            final_instance = token;
        }
        token++;
    }

    if (first_instance != NULL && final_instance != NULL)
    {
        size_t length = final_instance - first_instance + 1;
        strncpy(token, first_instance, length);
        token[length] = '\0';
    }

    return token;
}
