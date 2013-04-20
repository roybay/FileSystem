#include "../lib/my.h"

ssize_t my_write(int fd, const void* buf, size_t nbytes)
{
	ssize_t r;

	r = write(fd, buf, nbytes);

	if(r < 0)
	{
		my_str("Error: my_wrtie could not write to fd.");
		exit(EXIT_FAILURE);
	}

	return r;
}
