#include "monty.h"

int isargint(char *argument)
{
	if (*argument == '-')
		argument++;

	while (*argument != '\0')
	{
		if (isdigit(*argument))
		{
			argument++;
		}
		else 
		{
			return -1;
		}
	}
	return 1;
}
