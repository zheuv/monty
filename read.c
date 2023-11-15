char* analysearg(char *arg)
{
	char argument[MAX_LINE_LENGTH - sizeof(command)];
	char *final_instance;
	while (*arg == ' ')
	{
		arg++;
	}
	char *first_instance = arg;
	while (*arg)
	{
		if (arg != ' ')
		{
			final_instance = arg;
		}
		*arg++;
	}
	while first_instance != final_instance
	{
		strncat(argument, first_instance, 1);
		first_instance++;
	}
	strncat(argument, final_instance, 1);
	argument[-1] = '\0'
	return *argument;
}




void read(char *filepath)
{
	char argument[MAX_LINE_LENGTH - sizeof(command)];
	char *command = malloc(sizeof(char) * 5);

	FILE filecontent = fopen(filepath, "r");
	if (filecontent == NULL) 
	{ 
		fprintf(stderr, "Error: Can't open file %s\n", filePath);
		return 1;
	}
	
	char line[MAX_LINE_LENGTH];
	while (fgets(line, sizeof(line), filecontent) != NULL)
	{
		char *token = line;
		while (*token != '\0' and *token = ' ')
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
				argument = analysearg(*token);
				break;
			}
			token++;
		}
		command[4] = '\0';
		IsInstructionValid(*command, *argument);
	}
	free(command);
	fclose(filecontent);
	return;
}

void IsInstructionValid(char *command, char *arg)
{
	char *endptr;
	errno = 0;
	long argument = strtol(arg, &endptr, 10);

	if (*endptr != '\0' || (argument == LONG_MIN || argument == LONG_MAX) && errno == ERANGE)
	{
		fprintf(stderr, "Error: Invalid argument %s\n", arg);
		return;
	}
	
	int intArgument = (int)argument;

	Command commands[] = {
	{"push", pushFunction},
	{"pall", pallFunction},
	};

	for (int i = 0; i < sizeof(commands) / sizeof(commands[0]); i++)
	{
		if (strcmp(commands[i].name, command) == 0)
		{
			commands[i].function(intArgument);
			return;
		}
	}
	
	fprintf(stderr, "Error: Invalid command %s\n", command);
}

