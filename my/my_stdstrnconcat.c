#include "../lib/my.h"
char* my_stdstrnconcat(char* ch1, char* ch2, int i)
{
	if( i<=my_strlen(ch2))
		return my_strnconcat(ch1, ch2, i);
	return NULL;
}
