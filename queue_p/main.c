#include "../lib/queue_p.h"

int main(){


	queue_p_t* p;
	p_node* node;
	p_node* r;
	int *z;
	int k;
	int i[10] = {100,101,102,103,104,105,106,107,108,109};
	int f[10] = {110,111,112,113,114,115,116,117,118,119};
	z = (int*)xmalloc(sizeof(int));

	p = (queue_p_t*)xmalloc(sizeof(queue_p_t));
	p_init(p);

	node = p->head;

	p_push(p, &i[0], 1);//100 1 
	p_push(p, &i[1], 5);//101 5
	p_push(p, &i[2], 1);//102 1
	p_push(p, &i[3], 1);//103 1
	p_push(p, &i[4], 4);//104 4
	p_push(p, &i[5], 1);//105 1
	p_push(p, &i[6], 7);//106 7
	p_push(p, &i[7], 1);//107 1
	p_push(p, &i[8], 1);//108 1
	p_push(p, &i[9], 2);//109 2
	
	printf("p size:%i\n", p->size);

	for(k=0; k<10 ; k++){
		z = p_pop(p);	
		printf("pop :%i \n", z[0]);
	}
	p_push(p, &i[0], 1);//100 1 
	p_push(p, &i[1], 5);//101 5
	p_push(p, &i[2], 1);//102 1
	p_push(p, &i[3], 1);//103 1
	p_push(p, &i[4], 4);//104 4
	p_push(p, &i[5], 1);//105 1
	p_push(p, &i[6], 7);//106 7
	p_push(p, &i[7], 1);//107 1
	p_push(p, &i[8], 1);//108 1
	p_push(p, &i[9], 2);//109 2
	p_node_update(p, &(i[4])); //104 5
	p_node_update(p, &(i[4])); //104 6
	p_node_update(p, &(i[4])); //104 7
	/*printf("update item\n");
	for(k=0; k<10 ; k++){
		z = p_pop(p);	
		printf("pop :%i \n", z[0]);
	}*/
	printf("find item\n");		
	r = p_find(p, &(i[4]));
	z = (r->object);
	printf("pop :%i \n", z[0]);
	r = p_find(p, &(f[4]));
	if (r == NULL)
		printf("Not Found\n");
	else{
		z = (r->object);
		printf("pop :%i \n", z[0]);
	}
	return 1;
}
