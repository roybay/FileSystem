#include "filesystem.h"

void exe_remove(t_dir* lroot, char* name, int size){
	int i;
	int filesize;
	t_file *tempLFile = NULL;

	//my_int(size);
	p_node *currentChild;
	t_metafile *cf;
printf("Test 11\n");
	if (lroot->GFiles->head == NULL)
		return;
	
	//my_int(size);
	if(size <=0)
		return;
	
	currentChild = lroot->GFiles->head;
	cf = (t_metafile*)currentChild->object;

	for (i=0; i < lroot->GFiles->size; i++){
		if (!my_strcmp(cf->filename, name)){
			plus_filesize(filesize);	
	
			cf->filesize = cf->filesize - size;
			filesize = cf->filesize;

			minus_filesize(filesize);
			if (filesize <= 0){
				free_Lfile(cf->LFile);
				cf->tv = time_stamp();
				cf->LFile = NULL;
				cf->filesize = 0;
				return;
			}
			if (filesize < gl_blocksize){
				cf->tv = time_stamp();
				return;
			}	


			while (filesize > gl_blocksize){
				filesize -= gl_blocksize;
				if (tempLFile == NULL)
					tempLFile = cf->LFile;
				tempLFile = tempLFile->next;
			}

			cf->tv = time_stamp();
			free_Lfile(tempLFile->next);
			tempLFile->next = NULL;
			return;
		}
		currentChild = currentChild->next;
		cf = (t_metafile*)currentChild->object;
	}	
	
}
