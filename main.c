#include "monty.h"

stack_t *head = NULL;

int main(int argc, char *argv[])
{	
	char *filepath;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file");
		exit(EXIT_FAILURE);
	}
	filepath = argv[1];
	read(filepath);
	return 1;
}	
