#include "filesystem.h"

void read_file(char* argc)
{
	FILE *fd;
	fd = fopen(argc,"r");
	char ch;

	if(fd==NULL)
	{
		puts("Cannot open help document!");
		exit(1);
	}

	while((ch = fgetc(fd))!= EOF)
	{
		my_char(ch);
	}	

	fclose(fd);	
}
