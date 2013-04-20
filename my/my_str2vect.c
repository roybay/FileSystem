#include "../lib/my.h"

char** my_str2vect(char *str)
{	
	char	**vect;	
	int		i = 0;						/*index*/
	int		w = 0;						/*word count*/
	int 	first = 0;
	int 	last = 0;
	
	if 		(str == NULL)
			return 0;
	
	while 	(str[i] != '\0')
	{	
			while 	(str[i] == ' ')
					i++;
			if 		(str[i] != '\0')
					w++;		
			while	(str[i] != '\0' && str[i] != ' ') 
					i++;		
	}
						
	vect = (char**)xmalloc((w + 1) * sizeof(char*));
		
			i = 0;						/*set the string index beginning*/
			w = 0;						/* Set the word index to zero*/
	
	while 	(str[i] != '\0')
	{				
			while (str[i] == ' ')
					i++;
			first = i;
	
			while	(str[i] != '\0' && str[i] != ' ')
					i++;
			last = i;
	
			vect[w] = (char*)xmalloc(( last - first + 1) * sizeof(char));
			i = first;

			while	(str[i] != '\0' && str[i] != ' ')
			{
					vect[w][i-first] = str[i];
					i++;
			}
			vect[w][i-first] = '\0';
			w++; 		
	}	
	return vect;
}

