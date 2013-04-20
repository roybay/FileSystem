#include "filesystem.h"

void exe_rmdir(t_dir* lroot, char* name){
	int i;
	
	p_node *currentChild;
	t_dir *cd;
	if (lroot->GDir == NULL)
		return;
	
	currentChild = lroot->GDir->head;
	cd = (t_dir*)currentChild->object;
	
	for (i=0; i < lroot->GDir->size; i++){
		if (!my_strcmp(cd->name, name)){
			if (cd->GDir->head != NULL){
				printf("\033[22;31m rmdir: failed to remove '%s': Directory not empty  \033[01;37m \n", name);
				return;
			}else{			
				p_remove(lroot->GDir, cd);
				return;
			}
		}
		currentChild = currentChild->next;
		cd = (t_dir*)currentChild->object;
	}	
	
}
