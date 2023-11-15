#include "monty.h"


int main(int argc, char *argv[])
{	
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: %s file", argv[1]);
		return 1;
	}
	char *filepath;
	filepath = argv[1];
	read(*filepath);
	return;
}	
