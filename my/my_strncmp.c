#include "../lib/my.h"
int my_strncmp(char* ch1, char* ch2, int i){
	int n;	
	if (ch1==NULL && ch2==NULL || i<=0) 
		return 0;
	else if (ch1==NULL) 
		return -1; 
	else if (ch2==NULL) 
		return 1;
	else
	{	
		for (n=0; (n<i && (ch1[n]!='\0' || ch2[n]!='\0')) ; n++)
			if( ch1[n]-ch2[n] != 0)
				return (ch1[n]-ch2[n]);
		return 0;
	}
}

