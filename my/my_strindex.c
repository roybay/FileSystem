#include "../lib/my.h"
int my_strindex(char* str, char c){
	int i;
	if (str != NULL){
		for(i=0; str[i]!='\0'; i++)
			if (c == str[i])
				return i;
	}
	return -1;
}
