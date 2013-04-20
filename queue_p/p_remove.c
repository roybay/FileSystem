#include "../lib/queue_p.h"

int p_remove(queue_p_t *p, void *obj){
	p_node *node;
	p_node *current;
	
	if(p == NULL){
		return -1;
	}
	if(obj == NULL){
		return -2;
	}

	current = p->head;
	node = p->head;
	if(p->size-- == 1){
		p->head = NULL;
	}else{ //remove
		if (p->head->object == obj){//pop front
			p->head = node->next;
			p->head->previous = node->previous;
			node->previous->next = p->head;
		}else{
			while (node->object != obj){
				node = node->next;
			}
			current = node->next;
			current->previous = node->previous;
			node->previous->next = current;
		}
	}
	return 0;
}	
