#include "monty.h"

int main(int argc, char* argv[]) {
    FILE* file = fopen(argv[1], "r");
    char* command = malloc(sizeof(char) * 5);
    char* argument;
    int num_line = 0;
    int i = 0;

    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    char* line = NULL;
    size_t len = 0;
    ssize_t read;

    while ((read = getline(&line, &len, file)) != -1) {
        char* token = strtok(line, " \t\n");
        memset(command, 0, sizeof(char) * 5);
        argument = NULL;

        while  (token != NULL) {
            if (strlen(command) == 0) {
                strncpy(command, token, 4);
            } else if (argument == NULL) {
                argument = token;
		token = strtok(NULL, " \t\n");
		break;
            }

            token = strtok(NULL, " \t\n");
        }
	num_line++;
	if (token != NULL)
	{
		printf("invalid argument in line %d\n", num_line);
	}
	else 
	{
		printf("%s %s\n", command, argument == NULL ? "(null)" : argument);
	}
    }


    free(line);
    fclose(file);

    return 0;
}

