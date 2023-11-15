#include "monty.h"


int main(int argc, char *argv[])
{	
	char *filepath;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: %s file", argv[1]);
		return 1;
	}
	filepath = argv[1];
	read(filepath);
	return;
}	
