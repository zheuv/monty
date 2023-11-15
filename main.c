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
	read(*filepath);
	return;
}	
