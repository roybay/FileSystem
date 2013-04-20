#include "../lib/my.h"

FILE* my_fopen(char* path, char* mode)
{
	FILE *fd;
	fd = fopen(argc, "r");
	if (fd == NULL)
		printf("Error: my_fopen could not open the file.\n");

	return fd;
}
