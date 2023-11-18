#include "monty.h"


void IsInstructionValid(char *command,unsigned int line_number)
{
	instruction_t commands[] = {
	{"pall", pall}
        };
	long unsigned int i;


        for (i = 0; i < sizeof(commands) / sizeof(commands[0]); i++)
        {
                if (strcmp(commands[i].opcode, command) == 0)
                {
                        commands[i].f(&head, line_number);
                        return;
                }
        }

        fprintf(stderr,"L%d: unknown instruction %s\n", line_number, command);
	exit(EXIT_FAILURE);
}

