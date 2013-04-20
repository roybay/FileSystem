#include "filesystem.h"

void init_GFiles(){
	t_metafile *new;
	t_dir *current;

	FILE *fr;
	char ch[MAX];
	char c;
	int t;
	char** vect;
	//int z;

	fr = fopen(gl_inputfile,"r");	
	fflush(fr);						
	if(fr==NULL){
		puts("Cannot open dir_ file!");
		exit(1);
	}	
//	my_str("\nInsert file to GTree\n");
//	my_str("------------------------------------------\n");
	while((c = fgetc(fr))!= EOF)
	{
		t = 0;
		do{
			ch[t++] = c;

		}while ((c = fgetc(fr))!='\n');
		ch[t++] = '\0';
		
		vect = my_str2vect(ch);
		//for(z=0; z<11; z++)
		//	printf("%s\n", vect[z]);
		new = init_file(vect);
		plus_filesize(new->filesize);

		if (root == NULL)
			printf("ERROR<E1006>: Can't find root folder!\n");
			
		else{
			current = root;		
			current = find_dir(current, new->fullname);
			p_push(current->GFiles, new, 0);
			gl_filecount++;
/*
			printf("1: %s\n", new->filename);
			printf("2: %s\n", new->fullname);
			printf("3: %s\n", new->path);
			printf("4: %i\n", new->filesize);
			//printf("5: %ld\n", (long)new->tv);
			printf("6: Lfile Detail\n");
			print_Lfile(new->LFile, new->filesize);
			my_str("------------------------------------------\n");*/
		}
	}

	fflush(fr);
	if(fr!=NULL)
		fclose(fr);

}
