#include "../lib/my.h"

int my_fcntl(int fd, int cmd, long arg)
{
	int r;

	r = fcntl(fd, cmd, arg);
	
	if(r < 0)
	{
		my_str("ERROR: my_fcntl could not manipulate the file descriptor");
		exit(EXIT_FAILURE);
	}
	return r;
}
