#include "filesystem.h"

t_metafile* init_file(char** vect)
{
	char* name;
	t_metafile *f;

	if (my_atoi(vect[6]) > gl_freespace){
		printf("\033[22;31m Not enouhgt memory space! \033[01;37m \n");	
	}
		
		
	f = (t_metafile*)xmalloc(sizeof(t_metafile)+1); 
	
	name = vect[10];
	f->fullname = (char*)xmalloc(sizeof(char)*my_strlen(name)+1);
	my_strcpy(f->fullname, name);
	f->fullname[my_strlen(name)] = '\0';
	
	int i, j;
	i = my_strrindex(name, '/');
	f->path = (char*)xmalloc(sizeof(char)*i+1);
	for(j = 0; j < i; j++)
		f->path[j] = name[j];
	f->path[j] = '\0';

	f->filename = (char*)xmalloc(sizeof(char)*(my_strlen(name)-i+1));
	for(j = ++i; j < my_strlen(name)+1; j++)
		f->filename[j-i] = name[j];
	f->filename[j-i] = '\0';

	f->filesize = my_atoi(vect[6]);

	f->tv = init_timestamp(vect[7], vect[8], vect[9]);

	f->LFile = create_Lfile(f->filesize);

//	printf("1: %s\n", f->filename);
//	printf("2: %s\n", f->fullname);
//	printf("3: %s\n", f->path);
//	printf("4: %i\n", f->filesize);
//	printf("5: %ld\n", (long)f->tv);
//	print_Ldisk();
	return f;	
}
