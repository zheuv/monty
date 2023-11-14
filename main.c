int main(int argc, char *argv[])
{
	char *commands[] = {"push","pall"};
	int e = 0;
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: %s file", argv[1]);
		return 1;
	}
	char *filepath = argv[1];
	char command = read(*filepath);
	while (commands != NULL)
	{
		if (commands == command)
			e = 1;	
		commands++;
	}
	if (e = 0)
	{
		fprintf(stderr, "L: unknown instruction <opcode>
		
