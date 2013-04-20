#include "filesystem.h"

int request_Ldisk(){
	t_disk *previous, *current, *temp;
	current = Ldisk;
	previous = NULL;
		
	while(current->status == USED){	
		previous = current;	
		if(current->next == NULL){ //it means disk is full	
			printf("\033[22;31m You do not have available memory space!!! \033[01;37m \n");
			return -1;
		}
		current = current->next; 
	}	//FREE spot found
	if(current->begin !=current->end){
		temp = (t_disk*)xmalloc(sizeof(t_disk));
		temp->status = USED;
		temp->begin = current->begin;
		temp->end = current->begin;

		current->begin += 1;
		temp->next = current; 
	}else{
		temp = current;
		temp->status = USED;		
	}

	if (previous == NULL){
		Ldisk = temp;
	}else{
		previous->next = temp;
	}
	update_Ldisk();
	return temp->begin;
}
