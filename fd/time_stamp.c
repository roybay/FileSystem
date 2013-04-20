#include "filesystem.h"

time_t time_stamp(){
	struct timeval tv;
	gettimeofday(&tv, NULL); 
		
	return tv.tv_sec;
}
