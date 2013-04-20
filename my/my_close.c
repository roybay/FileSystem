#include "../lib/my.h"

int my_close(int fd)
{
	int r;
   
 	r = close(fd);
	
	if(r < 0){
     	my_str("Error: my_close could not close a file descriptor");
     	exit(EXIT_FAILURE);
   	}

	return r;
}
