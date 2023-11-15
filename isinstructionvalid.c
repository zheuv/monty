#include "monty.h"


void IsInstructionValid(char *command, char *arg)
{
        char *endptr;
        errno = 0;
        long argument = strtol(arg, &endptr, 10);

        if (*endptr != '\0' || (argument == LONG_MIN || argument == LONG_MAX) && errno == ERANGE)
        {
                fprintf(stderr, "Error: Invalid argument %s\n", arg);
                return;
        }

        int intArgument = (int)argument;

        Command commands[] = {
        {"push", push},
        {"pall", pall},
        };

        for (int i = 0; i < sizeof(commands) / sizeof(commands[0]); i++)
        {
                if (strcmp(commands[i].name, command) == 0)
                {
                        commands[i].function(intArgument);
                        return;
                }
        }

        fprintf(stderr, "Error: Invalid command %s\n", command);
}

