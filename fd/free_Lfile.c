#include "filesystem.h"

void free_Lfile(t_file* lf){
	//printf("free_Lfile\n");
	//printf("-------------------\n");
	//print_Ldisk();
	//printf("pma: %i \n",lf->pma);
	//printf("-------------------\n");
	if(lf == NULL)
		return;
	do{	
		free_Ldisk(lf->pma / gl_blocksize);
		lf = lf->next;
	}while(lf != NULL);
	//print_Ldisk();
}
