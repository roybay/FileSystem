#include "filesystem.h"

t_dir* find_dir(t_dir* dir, char* name)
{
	queue_p_t *childList;
	p_node *currentChild;	
	t_dir *cd;
	
	//printf("------------------------\n");		
	if (strcontstr(dir->fullname, name)){
		if(dir->GDir->head == NULL){
			//printf("1a:\t%s - %s\n", dir->fullname, name);			
			return dir; //We found the dir to add 
		}else{
			//printf("1b:\t%s - %s\n", dir->fullname, name);
			//printf("1c:\t%s \n", dir->path);
			//printf("1d:\t%s \n", dir->name);			
			childList = dir->GDir;
			currentChild = childList->head->previous;
			//int i;
			//i = childList->size;
			do{
				currentChild = currentChild->next;//head
				cd = (t_dir*)currentChild->object;	
			}while( !strcontstr((char*)cd->fullname, name) && currentChild != childList->head->previous);
				
			if(strcontstr(cd->fullname, name)){
				//printf("2:\t%s - %s\n", cd->fullname, name);
				return find_dir(cd, name);			
			}else{
				//printf("3:\tReturn = dir size= %i\n", childList->size);				
				return dir;
			}
		}	
	}
	return NULL;
}
