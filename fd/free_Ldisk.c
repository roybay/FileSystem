#include "filesystem.h"

void free_Ldisk(int i){
	t_disk *previous, *current, *temp, *new;
	current = Ldisk;
	previous = NULL;

	new = (t_disk*)xmalloc(sizeof(t_disk));
	new->status = FREE;	
	new->begin = i;
	new->end = i;

	while(current != NULL){	
		if(current->begin <= i && current->end >= i){
			if(current->begin == i){
				if(previous != NULL){
					previous->next = new;					
				}else{
					Ldisk = new;
				}
				new->next = current;
				current->begin +=1;	
				update_Ldisk();
				break;							
			}else if(current->end == i){
				current->end = current->end -1;				
				new->next = current->next;
				current->next = new;
				update_Ldisk();
				break;
			}else{
				temp = (t_disk*)xmalloc(sizeof(t_disk));
				temp->status = USED;
				temp->begin = current->begin;
				temp->end = i-1;
				if(previous != NULL){
					previous->next = temp;					
				}else{
					Ldisk = temp;
				}
				temp->next = new;
				new->next = current;
				current->begin = i+1;
				update_Ldisk();			
				break;
			}		
		}
		previous = current;
		current = current->next;
	}
}
