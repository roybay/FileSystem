#include "filesystem.h"

int count_fragmentation(int filesize){
	int i;
	i= filesize;
	if(i ==0)
		return 0;
	while (i > gl_blocksize)
		i -= gl_blocksize;
	return gl_blocksize - i; 	
}
