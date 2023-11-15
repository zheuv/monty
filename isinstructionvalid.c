#include "monty.h"


void IsInstructionValid(char *command, char *arg)
{
        char *endptr;
        errno = 0;
        long argument;
        argument = strtol(arg, &endptr, 10);


        if ((*endptr != '\0' || (argument == LONG_MIN || argument == LONG_MAX) && (errno == ERANGE))
        {
                fprintf(stderr, "Error: Invalid argument %s\n", arg);
                return;
        }

        int intArgument;
        intArgument = (int)argument;

        Command commands[] = {
        {"push", push},
        {"pall", pall},
        };

	int i;
        for (i = 0; i < sizeof(commands) / sizeof(commands[0]); i++)
        {
                if (strcmp(commands[i].name, command) == 0)
                {
                        commands[i].function(*head,intArgument);
                        return;
                }
        }

        fprintf(stderr, "Error: Invalid command %s\n", command);
}

