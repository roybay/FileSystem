#include "filesystem.h"

void plus_filesize(int filesize){
	gl_freespace -= filesize;
	gl_fragmentation += count_fragmentation(filesize);
 	
}
