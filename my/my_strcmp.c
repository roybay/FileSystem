#include "../lib/my.h"
int my_strcmp(char* ch1, char* ch2){
	if (ch1==NULL && ch2==NULL) 
		return 0;
	else if (ch1==NULL) 
		return -1; 	
	else if (ch2==NULL) 
		return 1;
	else{
		for( ; (*ch1!='\0' || *ch2!='\0'); ch1++, ch2++)
			if( *ch1- *ch2 != 0)
				return (*ch1- *ch2);
	}
	return 0;
}
