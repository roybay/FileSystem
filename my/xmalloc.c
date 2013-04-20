#include "../lib/my.h"
void* xmalloc(int n){
	void *p;
	p = malloc(n);
	if (p == NULL){
		my_str("Virtual Memory Exhausted!__xmalloc\n");
		exit(1);
	}
	return (p);
}
