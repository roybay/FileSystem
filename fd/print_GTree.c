#include "filesystem.h"

void print_GTree(t_dir* lroot, int tab)
{
	int i;
	int j;
	p_node *dirChild;
	p_node *fileChild;
	
	if(lroot == NULL)
		return;
		
	for(i=0; i<tab; i++)
		my_str("    ");
	if (lroot == root)
		printf("\033[01;34mroot \033[01;37m \n");	
	printf("\033[01;34m%s \033[01;37m \n", lroot->name);	

	if (lroot->GDir->head == NULL)
		return;
	
//printf("debug:21 %s\n", lroot->name);	
	dirChild = lroot->GDir->head;
	t_dir *cd;
	cd = (t_dir*)dirChild->object;
//printf("debug:22 %s\n", lroot->name);	

	for (i = 0; i < (lroot->GDir->size) ; i++){
		print_GTree(cd, tab+1);
		dirChild = dirChild->next;
	  	cd = (t_dir*)dirChild->object;
	}

	if (lroot->GFiles->head == NULL)
		return;		
 
	fileChild = lroot->GFiles->head;
	t_metafile *cf;	
	cf = (t_metafile*)fileChild->object;

	for (i = 0; i < (lroot->GFiles->size) ;i++){
		for(j=0; j<tab; j++)
			my_str("    ");		
		printf("%s \n", cf->filename);
		fileChild = fileChild->next;
		cf = (t_metafile*)fileChild->object;
	}
	return;
}
