#include "../lib/my.h"

int my_pipe(int fd[2])
{
	int r;
	r = pipe(fd);
	
	if(r < 0){
		my_str("ERROR: my_pipe Could not pipe");
		exit(EXIT_FAILURE);
	}

	return r;
}
