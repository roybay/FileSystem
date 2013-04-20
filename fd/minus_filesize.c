#include "filesystem.h"

void minus_filesize(int filesize){
	gl_freespace += filesize;
	gl_fragmentation -= count_fragmentation(filesize);
 	
}
