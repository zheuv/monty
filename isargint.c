#include "monty.h"
#include <stdbool.h>
#include <ctype.h>

bool isargint(char *argument)
{
    if (*argument == '-')
        argument++;

    while (*argument != '\0')
    {
        if (isdigit((unsigned char)*argument))
        {
            argument++;
        }
        else
        {
            return false;
        }
    }
    return true;
}

