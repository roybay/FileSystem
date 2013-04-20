#include "filesystem.h"

void init_Ldisk()
{
	gl_totalblock = gl_disksize / gl_blocksize;
	
	Ldisk = (t_disk*)xmalloc(sizeof(t_disk)); 
	Ldisk->status = FREE;
	Ldisk->begin = 0;	
	Ldisk->end = gl_totalblock - 1;
	Ldisk->next = NULL;	
	
	gl_fragmentation = 0;
	gl_freespace = gl_totalblock * gl_blocksize; 	
}
