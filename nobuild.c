#define NOBUILD_IMPLEMENTATION
#include "nobuild.h"

#define CFLAGS "-Wall", "-Wextra", "-std=c11", "-pedantic", "-ggdb"

int main(int argc, char **argv)
{
	GO_REBUILD_URSELF(argc, argv);
	CMD("gcc", CFLAGS, "-o", "miniexcel", "src\\main.c");
	
	if(argc > 1)
	{
		if(strcmp(argv[1],"run") == 0)
		{
			CMD(".\\miniexcel");
		}
		else
		{
			PANIC("%s is unknown subcommand",argv[1]);
		}
	}
	return 0;
}
