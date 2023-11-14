char analysearg(char *arg)
{
	char argument;
	char *final_instance;
	while (arg = ' ')
	{
		arg++;
	}
	char *first_instance = arg;
	while (arg)
	{
		if (arg != ' ')
		{
			final_instance = arg;
		}
	}
	while first_instance != final_instance
	{
		strncat(argument, &first_instance, 1);
		first_instance++;
	}
	return argument;
}




void read(char *filepath)
{
	char *argument;
	char *command = malloc(sizeof(char) * 5);
	FILE filecontent = fopen(filepath, "r");
	if (file == NULL) 
	{ 
		fprintf(stderr, "Error: Can't open file %s\n", filePath);
		return 1;
	}
	char line[MAX_LINE_LENGTH];
	while (fgets(line, sizeof(line), file) != NULL)
	{
		char *token = strtok(line, " \n");
		while (token != NULL and token = ' ')
		{
			token++;
		}
		while (token != NULL)
		{
			if (strlen(command) + 1 < sizeof(command))
			{
				strncat(command, &token, 1);
			}
			else
			{
				argument = analysearg(*token);
				break;
			}
			token++;
		}
		command[4] = '\0';
		

	return command

}
