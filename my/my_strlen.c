#include "../lib/my.h"
int my_strlen(char* s){
	int length = 0;	
	if (s == NULL) return -1;
	else
		while ( *s++ != '\0') length++;
	return length;
}
