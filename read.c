#include "monty.h"

void read(char *filepath)
{
    char *command = malloc(sizeof(char) * 5);
    char argument = maaloc(MAX_LINE_LENGTH - sizeof(command));
    char line[MAX_LINE_LENGTH];

    FILE* filecontent = fopen(filepath, "r");
    if (filecontent == NULL)
    {
        fprintf(stderr, "Error: Can't open file %s\n", filepath);
        return;
    }

    
    while (fgets(line, sizeof(line), filecontent) != NULL)
    {
        char *token = line;
        while ((*token != '\0') && (*token == ' '))
        {
            *token++;
        }
        while (*token != '\0')
        {
            if (strlen(command) + 1 <= (sizeof(command) - sizeof(char)))
            {
                strncat(command, token, 1);
            }
            else
            {
                argument = analysearg(token);
                break;
            }
            token++;
        }
        command[4] = '\0';
        IsInstructionValid(command, argument);
    }
    free(command);
    fclose(filecontent);
    return;
}

