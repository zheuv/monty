#include "monty.h"


void IsInstructionValid(char *command, int line_number)
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

        printf("L %d: unknown instruction %s", line_number, command);
}

