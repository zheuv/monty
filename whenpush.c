#include "monty.h"


void whenpush(char *arg, int line_number)
{
        int intArgument;

        if (!isargint(arg))
        {
               fprintf(stderr,"L%d: usage: push integer\n", line_number);
                exit(EXIT_FAILURE);
        }

        intArgument = atoi(arg);

        push(&head,intArgument);
	return;
}

