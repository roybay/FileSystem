#include "filesystem.h"

void exe_mkdir(t_dir* lroot, char* name){
	t_dir *new;
	char* fullname;
	fullname = (char*)xmalloc(sizeof(char)* my_strlen(lroot->fullname)+1);
	my_strcpy(fullname, lroot->fullname);
	fullname[my_strlen(lroot->fullname)] = '\0';
	fullname = my_strconcat(fullname, name);	
	
	//printf("%s \n", fullname);
	
	if(my_strcmp(lroot->fullname, fullname)){
		new = init_dir(lroot, fullname);
		p_push(lroot->GDir, new, 0);
		gl_dircount++;
	/*	printf("Name     :%s\n", (char*)new->name);
		printf("FullName :%s\n", (char*)new->fullname);
		printf("Path     :%s\n", (char*)new->path);
		my_str("---------------------------\n");*/
	}
}
