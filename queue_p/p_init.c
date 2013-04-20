#include "../lib/queue_p.h"

int p_init(queue_p_t* p){
	p->size = 0;
	p->head = NULL;
	
	return 0;
}
