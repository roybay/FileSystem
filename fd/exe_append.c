#include "filesystem.h"

void exe_append(t_dir* lroot, char* name, int size){
	int i;
	int new;

	p_node *currentChild;
	t_metafile *cf;
	
	if (lroot->GFiles == NULL)
		return;

	//my_int(size);
	if(size <=0)
		return;
	
	currentChild = lroot->GFiles->head;
	cf = (t_metafile*)currentChild->object;
	
	for (i=0; i < lroot->GFiles->size; i++){
		if (!my_strcmp(cf->filename, name)){
			minus_filesize(cf->filesize);
			
			cf->filesize = cf->filesize + size;
			new = cf->filesize;
			
			plus_filesize(new);			
			//my_int(new);
			if(cf->LFile == NULL){
				cf->LFile = create_Lfile(new);
				cf->tv = time_stamp();
				return;
			}			
			while (new > gl_blocksize){
				new -= gl_blocksize;
				if (cf->LFile->next != NULL)
					cf->LFile = cf->LFile->next;
				else{
					cf->LFile->next = create_Lfile(new);
					cf->tv = time_stamp();
				}
			}		
			return;
		}
		currentChild = currentChild->next;
		cf = (t_metafile*)currentChild->object;
	}	
	
}
