#include "../lib/my.h"
char* my_strnconcat(char* ch1, char* ch2, int s){
	int i, n;
	char *str;
	
	if (ch1==NULL && ch2==NULL)
		return NULL;	
	str = (char*)xmalloc((my_strlen(ch1) + my_strlen(ch2) + 1) * sizeof(char));
	
	for(i=0; ch1!=NULL && ch1[i]!='\0'; i++)
		str[i] = ch1[i];
	for(n=0; ch2!=NULL && n<s; i++, n++)
		str[i] = ch2[n];
	str[i] = '\0';

	return &str[0];
}
