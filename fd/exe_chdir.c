#include "filesystem.h"

t_dir* exe_chdir(t_dir* dir, char* name)
{
	queue_p_t *list;	
	p_node *currentChild;	
	t_dir *cd;
	int i;
	
	list = dir->GDir;
	currentChild = list->head;
	if(currentChild != NULL){
		cd = (t_dir*)currentChild->object;
		for (i=0; i< list->size ; i++){
			if (strcontstr((char*)cd->name, name) == TRUE){
				return cd;
			}else{
				currentChild = currentChild->next;
				cd = (t_dir*)currentChild->object;	
			}
		}
		return (t_dir*)NULL;
	}
	return (t_dir*)NULL;
}
