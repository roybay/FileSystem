#include "filesystem.h"

t_file* create_Lfile(int fsize){
	t_file *Lfile, *current, *new;
	int blocks;
	int i;

	blocks =1;
	if (fsize>0){
		blocks = fsize / gl_blocksize;
		if( fsize != blocks*gl_blocksize)
			blocks++;
	}else
		return (t_file*)NULL;

	for(i=0; i<blocks ; i++){
		new = (t_file*)xmalloc(sizeof(t_file));
		new->pma = request_Ldisk() * gl_blocksize;
		new->next = NULL;		
		if (i == 0){
			Lfile = new;
			current = new;
		}else{
			current->next = new;
			current = current->next;
		}			
	}	
	return Lfile;
}

