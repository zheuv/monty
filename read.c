#include "monty.h"

int read(char *filepath) {
    FILE* file = fopen(filepath, "r");
    char* command;
    char* argument;
    int num_line = 0;
    char* line = NULL;
    size_t len = 0;
    ssize_t read;


    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    while ((read = getline(&line, &len, file)) != -1) {
        char* token = strtok(line, " \t\n");
        command = NULL;
        argument = NULL;

        while  (token != NULL) {
            if (command == NULL) {
                command = token;
            } else if (argument == NULL) {
                argument = token;
                token = strtok(NULL, " \t\n");
                break;
            }

            token = strtok(NULL, " \t\n");
        }
        num_line++;
	if (command == NULL)
	{
		printf("no instruction");
	}
	else if (token != NULL)
        {
                printf("L %d: usage: push integer", num_line);
		exit(EXIT_FAILURE);
        }
	else if (strcmp("push", command) == 0)
	{
		if (argument == NULL)
		{
			printf("L %d: usage: push integer", num_line);
			exit(EXIT_FAILURE);
		}
		else
		{
			whenpush(argument, num_line);
		}
	}
        else
        {
		IsInstructionValid(command, num_line);
        }
    }


    free(line);
    fclose(file);

    return 0;
}
