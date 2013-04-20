#include "../lib/my.h"

char* my_vect2str(char** argv)
{	
	int length = 0;
	int i = 0;
	char *str;
		
	while(argv[i] != '\0')
	{
		if(i>0)
			length++;
		length += my_strlen(argv[i++]);
	}
	str = (char*)xmalloc((length + 1) * sizeof(char));	
	if(str!=NULL)
	{
		str[0] = '\0';
		i = 0;
		while(argv[i] != '\0')
		{	
			if(i>0)
				my_strcat(str, " ");
			my_strcat(str, argv[i++]);
		}
		my_strcat(str, argv[i++]);
		return str;
	}
	return NULL;
}

