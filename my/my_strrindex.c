#include "../lib/my.h"
int my_strrindex(char* str, char c){
	int index = my_strlen(str);
	index--;
	if (str != NULL){
		while (index >= 0){
			if (str[index--] == c) return ++index;}
	}
	return -1;
}
