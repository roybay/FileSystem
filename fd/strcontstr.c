#include "filesystem.h"

bool strcontstr(char* str, char* container)
{
	int i;
	bool contains;

	i = 0;
	contains = TRUE;

	while(contains && i != my_strlen(str)){
		if(str[i] != container[i])
			contains = FALSE;
		i++;
	}
	return contains;
}
