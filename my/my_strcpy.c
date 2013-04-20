#include "../lib/my.h"
char* my_strcpy(char* ch1, char* ch2)
{
	int i=0;
	if( ch1==NULL) 
		return NULL;
	
	if(ch2!=NULL)
	{
		do{
			ch1[i] = ch2[i];
		}while(ch2[i++]!='\0');
	}
	return ch1;	
}
