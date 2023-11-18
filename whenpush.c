#include "monty.h"


void whenpush(char *command, char *arg, int line_number)
{
        int intArgument;

        if (!isargint(arg))
        {
                fprintf("L %d: usage: push integer", line_number);
                exit(EXIT_FAILURE);
        }

        intArgument = atoi(arg);

        push(&head,intArgument);
	return;
}

