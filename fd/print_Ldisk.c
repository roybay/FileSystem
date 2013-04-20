#include "filesystem.h"

void print_Ldisk()
{
	t_disk *temp;
	temp = Ldisk;
	do{
		if(temp->status == FREE)
			printf("Free  : %i - %i \n", temp->begin, temp->end);
		else
			printf("In Use: %i - %i \n", temp->begin, temp->end);
			temp = temp->next;
	}while(temp != NULL);	
	printf("Fragmentation   : %i bytes \n", gl_fragmentation);
	printf("Free Disk Spece : %i bytes \n", gl_freespace);
}
