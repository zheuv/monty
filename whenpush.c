#include "monty.h"


void whenpush(char *command, char *arg)
{
        int intArgument;

        if (!isargint(arg))
        {
                fprintf(stderr, "Error: Invalid argument %s\n", arg);
                return;
        }

        intArgument = atoi(arg);

        push(&head,intArgument);
	return;
}

