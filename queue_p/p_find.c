#include "../lib/queue_p.h"

void* p_find(queue_p_t *p, void *obj){
	int i;
	p_node *current;
	current = p->head;
	i = p->size;

	if(p == NULL){
		return NULL;
	}
	if(obj == NULL){
		return NULL;
	}	
	
	while (current->object != obj && i-- >0){
		current = current->next;		
	}
	if(current->object == obj)
		return current;
	else
		return NULL;


}
