#include "filesystem.h"

void init_GDirs(){
	t_dir *current, *new;

	FILE *fd;
	char ch[MAX];
	char c;
	int t = 0;

	fd = fopen(gl_inputdir,"r");
	fflush(fd);							
	if(fd==NULL)	{
		puts("Cannot open dir_ file!");
		exit(1);
	}	
	//my_str("\nInsert dir to GTree\n");
	//my_str("---------------------------\n");
	
	while((c = fgetc(fd))!= EOF)
	{
		do{
			ch[t++] = c;

		}while ((c = fgetc(fd))!='\n');
		ch[t++] = '\0';
		t = 0;
		//printf("%s\n", ch);

		if (root == NULL){
			root = init_dir(root, ch);
			gl_dircount++;
			/*printf("Name     :%s\n", (char*)root->name);
			printf("FullName :%s\n", (char*)root->fullname);
			printf("Path     :%s\n", (char*)root->path);
			my_str("---------------------------\n");*/
		}else{
			current = find_dir(root, ch);
			if(my_strcmp(current->fullname, ch)){
				new = init_dir(current, ch);
				p_push(current->GDir, new, 0);
				gl_dircount++;
				/*printf("Name     :%s\n", (char*)current->name);
				printf("FullName :%s\n", (char*)current->fullname);
				printf("Path     :%s\n", (char*)current->path);
				my_str("---------------------------\n");*/
			}
		}
	}
	fflush(fd);
	fclose(fd);	
}
