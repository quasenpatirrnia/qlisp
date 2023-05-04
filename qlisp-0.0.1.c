#include <stdio.h>
#include <editline.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	puts("qlisp v0.0.1");
	puts("Press Ctrl+C to exit\n");
	while (1)
	{
		char* input = readline("qlisp> ");
		add_history(input);
		printf("No you're a %s\n", input);
		free(input);
	}
}
