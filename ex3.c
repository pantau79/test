#include <stdio.h>

int main(int argc, char *argv[])
/* There shall come forth a clear input argument handler with parameters maybe */
{
	int i = 0;
	for (i = 0; i < argc; i++) {
		printf("argv[%d] = %s\n", i, argv[i]);
	}

	/* USAGE of the program (if no argument is given) */
	if (argc == 1) {
		printf("Usage: ./ex3 [option1] [option2] [value:int] [destination:folder])\n");
		printf("option1: -s --- secure connection\n");
		printf("option2: -p:profile_name --- login as given 'profile_name'\n");
		printf("value: if task requires an int value such as a port number\n");
		printf("destination: is the unix path to the destination folder\n");
	}
	return 0;
}

/* This part could become an information area */
