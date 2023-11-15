#include "monty.h"

void read(char *filepath)
{
    char *command = malloc(sizeof(char) * 5);
    char *argument;
    char line[MAX_LINE_LENGTH];
    int i;

    FILE* filecontent = fopen(filepath, "r");
    if (filecontent == NULL)
    {
        fprintf(stderr, "Error: Can't open file %s\n", filepath);
        return;
    }

    i = 0;
    while (fgets(line, sizeof(line), filecontent) != NULL)
    {
        char *token = line;
	i++;

        while ((*token != '\0') && (*token == ' '))
        {
            token++;
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

