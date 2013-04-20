#include "../lib/my.h"
char* my_find(char* ch1, char ch2){
	if (ch1 != NULL)
	{
		while( *ch1 != ch2 && *ch1 !='\0')
			ch1++;
		if (ch1 != '\0')
			return ch1;
	}		
	return NULL;
}
