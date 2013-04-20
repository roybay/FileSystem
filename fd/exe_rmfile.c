#include "filesystem.h"

void exe_rmfile(t_dir* lroot, char* name){

	int i;
	
	p_node *currentChild;
	t_metafile *cf;

	if (lroot->GFiles == NULL)
		return;
	
	currentChild = lroot->GFiles->head;
	cf = (t_metafile*)currentChild->object;
	
	for (i=0; i < lroot->GFiles->size; i++){
		if (!my_strcmp(cf->filename, name)){
			gl_freespace += cf->filesize;
			gl_fragmentation -= count_fragmentation(cf->filesize);
			free_Lfile(cf->LFile);
			p_remove(lroot->GFiles, cf);
			return;
		}
		currentChild = currentChild->next;
		cf = (t_metafile*)currentChild->object;
	}	
	
}
