int token(*filepath) {
    char input[];

    char *token = strtok(input, " \t");

    while (token != NULL) {
        printf("Token:%s\n", token);
        token = strtok(NULL, " \t");
    }

    return 0;
}

