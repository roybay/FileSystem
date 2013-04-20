#include "../lib/my.h"
char* my_strncpy(char* ch1, char* ch2, int n)
{
	int i;
	if( ch1 != NULL && ch2!=NULL)
	{	
		for(i=0; ch2[i]!='\0' && i<n ; i++)
			ch1[i] = ch2[i];
		ch1[i] = '\0';
		return &ch1[0];
	}
	return NULL;
}
