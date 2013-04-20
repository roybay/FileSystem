#include "../lib/my.h"

ssize_t my_read(int fd, void* buf, size_t nbytes)
{
	ssize_t r;
	
	r = read(fd, buf, nbytes);

	if(r < 0)
	{
		my_str("Error: my_read could not read the fd.");
		exit(EXIT_FAILURE);
	}
	
	return r;
}

