#include "monty.h"


void IsInstructionValid(char *command, char *arg)
{
	int intArgument;
	Command commands[] = {
        {"push", push},
	{"pall", pall}
        };
	long unsigned int i;

        if (!isargint(arg))
        {
                fprintf(stderr, "Error: Invalid argument %s\n", arg);
                return;
        }

        intArgument = atoi(arg);


        for (i = 0; i < sizeof(commands) / sizeof(commands[0]); i++)
        {
                if (strcmp(commands[i].name, command) == 0)
                {
                        commands[i].function(&head,intArgument);
                        return;
                }
        }

        fprintf(stderr, "Error: Invalid command %s\n", command);
}

