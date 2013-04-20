#include "filesystem.h"

void exe_printout(t_dir* lroot)
{
	int i;
	p_node *currentChild;
	currentChild = lroot->GFiles->head;
	
	t_metafile *cf;	
	cf = (t_metafile*)currentChild->object;
	my_str("------------------------------------------\n");

	for (i = 0; i < lroot->GFiles->size ;i++){
		printf("1: %s\n", cf->filename);
		printf("2: %s\n", cf->fullname);
		printf("3: %s\n", cf->path);
		printf("4: %i\n", cf->filesize);
		printf("5: %ld\n", (long)cf->tv);
		printf("6: Lfile Detail\n");
		print_Lfile(cf->LFile, cf->filesize);
		my_str("------------------------------------------\n");
		currentChild = currentChild->next;
		cf = (t_metafile*)currentChild->object;
	}
}
