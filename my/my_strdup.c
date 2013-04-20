#include "../lib/my.h"
char* my_strdup(char* ch1){
	int i=0;
	char *ret;
	if(ch1!=NULL)
	{
		ret = (char*)xmalloc(my_strlen(ch1) * sizeof(char));
		do{
			ret[i] = ch1[i];
		}while(ch1[i++]!='\0');
		
		return &ret[0];
	}
	return NULL;
}
