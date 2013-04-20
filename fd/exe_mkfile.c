#include "filesystem.h"

void exe_mkfile(t_dir* lroot, char* name){
	char* fullname;
	t_metafile *f;

//	printf("Dir fullname: %s \n", lroot->fullname);	
	fullname = (char*)xmalloc(sizeof(char)* 1);
	fullname[0] = '\0';
	fullname = my_strconcat(fullname, lroot->fullname);
	fullname = my_strconcat(fullname, name);

	f = (t_metafile*)xmalloc(sizeof(t_metafile)*1);

	f->fullname = (char*)xmalloc(sizeof(char)*my_strlen(fullname)*1);
	my_strcpy(f->fullname, fullname);
	f->fullname[my_strlen(fullname)] = '\0';	
	
	f->path = (char*)xmalloc(sizeof(char)*(my_strlen(lroot->path)+1));
	my_strcpy(f->path,lroot->path); 
	f->path[my_strlen(lroot->path)] = '\0';

	f->filesize = 0;
	
	f->tv = time_stamp();
	
	f->LFile = create_Lfile(f->filesize);
	

	f->filename = (char*)xmalloc(sizeof(char)*(my_strlen(name)+1));
	my_strcpy(f->filename, name);
	f->path[my_strlen(lroot->path)] = '\0';

/*	printf("1: %s\n", f->filename);
	printf("2: %s\n", f->fullname);
	printf("3: %s\n", f->path);
	printf("4: %i\n", f->filesize);
	printf("5: %d\n", (int)f->tv);
	print_Ldisk();
*/
	p_push(lroot->GFiles, f, 0);
	gl_filecount++;

}
