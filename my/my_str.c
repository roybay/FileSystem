#include "../lib/my.h"
void my_str(char* s){
	if (s!=NULL){
		while (*s!='\0'){
			my_char(*s);
			s++;	}
	}	
}
