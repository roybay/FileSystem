#include "../lib/my.h"
char* my_rfind(char* ch1, char ch2){
	char* last = NULL;
	if (ch1 == NULL) 
		return ch1;

	while( *ch1 !='\0')
	{
		if (*ch1 == ch2)
			last = ch1;
		ch1++;
	}
	return last;
}
