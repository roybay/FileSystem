#include "filesystem.h"

void print_Lfile(t_file* Lfile, int size)
{	
	int i = 1;
	printf("Lfile size: %i \n", size);
	
	while(Lfile!=NULL){
		printf("\t%i.- PMA: %i \t", i++, (int)Lfile->pma);
		if (size > gl_blocksize){
			size -= gl_blocksize;
		 	printf("Used Mem: %i \n", gl_blocksize);
		}else{
		 	printf("Used Mem: %i \n", size);
		}
		Lfile = Lfile->next;
	}		
}
