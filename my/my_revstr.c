#include "../lib/my.h"
int my_revstr(char* s){
	int length;
	int i;
	char temp;
	
	for(length = my_strlen(s), i=0; i<length-i-1; i++){
		temp = s[i];
		s[i] = s[length-i];
		s[length-i] = temp;
	}
	return length+i;
}
/*int left = -1;
	int right = my_strlen(rs);
	int length = right;
	char temp;
	if (rs != NULL){
		while (++left < --right){
			temp = rs[left]; 
			rs[left] = rs[right]; 
			rs[right] = temp;}
		return length;
	}
	return -1;*/
