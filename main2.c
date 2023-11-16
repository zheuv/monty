#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    FILE *file = fopen(argv[1], "r");

    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    char *line = NULL;
    size_t len = 0;
    ssize_t read;

    while ((read = getline(&line, &len, file)) != -1) {
        char *token = strtok(line, "\t\n"); // Tab and line break as delimiters

        while (token != NULL) {
            printf("Token: %s\n", token);
            token = strtok(NULL, "\t\n");
        }
    }

    free(line);
    fclose(file);

    return 0;
}

