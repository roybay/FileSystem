#include "../lib/queue_p.h"

int p_push(queue_p_t* p, void* obj, int priority){
	p_node* node;
	p_node* current;
	p_node* tail;

	if(p == NULL){
		return -1;
	}
	if(obj == NULL){
		return -2;
	}	

	node = (p_node*)xmalloc(sizeof(p_node));
	node->object = obj;
	node->count = priority;
	current = p->head;
	if (p->head != NULL)
		tail = current->previous;
	
	if(current == NULL){//linked list empty			
		node->previous = node;
		node->next = node;
		p->head = node;		
	}else if (tail == current){//linked list has only one item
		if (node->count < current->count){
			p->head = node;	
		}
		node->next = current;
		node->previous = current;
		current->next = node;
		current->previous = node;	
	}else{//linked list has multiple item
		while(node->count >= current->count && tail != current){
			current = current->next;
		}
		
		if(node->count < current->count){
			node->next = current;
			node->previous = current->previous;
			node->previous->next = node;
			node->next->previous = node;			
		}else{
			node->next = current->next;
			node->previous = current;
			node->previous->next = node;
			node->next->previous = node;
		}
	}	
	p->size++;
	return 0;
}
