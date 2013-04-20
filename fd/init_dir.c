#include "filesystem.h"

t_dir* init_dir(t_dir* parent, char* name)
{
	t_dir *dir;
	dir = (t_dir*)xmalloc(sizeof(t_dir)+1); 
	dir->parentDir = parent;

	dir->fullname   = (char*)xmalloc(sizeof(char)*my_strlen(name)+2);
	my_strcpy(dir->fullname, name);
	dir->fullname[my_strlen(name)] = '\0';
	if(parent != NULL)
		dir->fullname = my_strconcat(dir->fullname, "/");

	dir->GDir   = (queue_p_t*)xmalloc(sizeof(queue_p_t)+1);
	p_init(dir->GDir);

	dir->GFiles  = (queue_p_t*)xmalloc(sizeof(queue_p_t)+1);
	p_init(dir->GFiles);

	int i, j;
	i = my_strrindex(name, '/');
	dir->path = (char*)xmalloc(sizeof(char)*i+1);
	for(j = 0; j < i; j++)
		dir->path[j] = name[j];
	dir->path[j++] = '\0';

	dir->name = (char*)xmalloc(sizeof(char)*(my_strlen(name)-i));
	for(; j < my_strlen(name); j++)
		dir->name[j-i-1] = name[j];
	dir->name[j-i-1] = '\0';

	//printf("init_dir:path:%s \tname:%s\n", dir->path, dir->name);
	return dir;	
}
