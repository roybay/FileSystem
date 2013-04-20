#include "filesystem.h"

void update_Ldisk(){
	t_disk *previous, *current, *temp;

	previous = Ldisk;
	current = Ldisk->next;		

	while(current != NULL){
		if(previous->status == current->status){	
			previous->end = current->end;
			previous->next = current->next;
			temp = current;
			free(temp);
			current = current->next;
			update_Ldisk();
		}else{
		previous = current;
		current = current->next;
		}
	}
}
