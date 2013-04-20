#include "../lib/queue_p.h"

int p_node_update(queue_p_t *p, void *obj){
	p_node *node;
	node = p->head;

	if(p == NULL){
		return -1;
	}
	if(obj == NULL){
		return -2;
	}	
	
	while (node->object != obj){
		node = node->next;
	}	
	node->count++;
	p_remove(p, obj);
	p_push(p, obj, node->count);
	return node->count;
}
