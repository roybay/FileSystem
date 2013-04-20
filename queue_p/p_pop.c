#include "../lib/queue_p.h"

void* p_pop(queue_p_t* p){
	void* object;
	p_node* node;
		
	if(p == NULL){
		return NULL;
	}

	if(p->head == NULL){
		return NULL;
	}

	node = p->head;
	object = node->object;

	if(p->size-- == 1){
		p->head = NULL;
	}else{
		p->head = node->next;
		p->head->previous = node->previous;
		node->previous->next = p->head;
	}
	return object;
}
