#include "monty.h"


void IsInstructionValid(char *command)
{
	Command commands[] = {
	{"pall", pall}
        };
	long unsigned int i;


        for (i = 0; i < sizeof(commands) / sizeof(commands[0]); i++)
        {
                if (strcmp(commands[i].name, command) == 0)
                {
                        commands[i].function(&head);
                        return;
                }
        }

        fprintf(stderr, "Error: Invalid command %s\n", command);
}

