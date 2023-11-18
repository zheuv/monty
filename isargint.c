#include "monty.h"
#include <ctype.h>

bool isargint(char *argument)
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
			return false;
		}
	}
	return true;
}
