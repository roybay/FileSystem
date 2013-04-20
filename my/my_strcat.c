#include "../lib/my.h"
char* my_strcat(char* ch1, char* ch2)
{
	char* ch;
	ch = ch1;
	if(ch1 == NULL || ch2 == NULL)
		return ch1;

	while( *ch1++ != '\0')
	;
	
	ch1--;	
	while( *ch2 != '\0') 
		*ch1++ = *ch2++;
	*ch1 = '\0';
	return ch;
}
