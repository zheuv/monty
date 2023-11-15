#include "monty.h"





char* analysearg(char *arg)
{
        char argument[MAX_LINE_LENGTH - sizeof(command)];
        char *final_instance;
        while (*arg == ' ')
        {
                arg++;
        }
        char *first_instance = arg;
        while (*arg)
        {
                if (arg != ' ')
                {
                        final_instance = arg;
                }
                *arg++;
        }
        while first_instance != final_instance
        {
                strncat(argument, first_instance, 1);
                first_instance++;
        }
        strncat(argument, final_instance, 1);
        argument[-1] = '\0'
        return *argument;
}


