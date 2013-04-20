#include "filesystem.h"

int std_param_check(char* ch, int i)
{	
	int k, size, j;
	bool r = TRUE;	
	int val;

	switch (i){
		case 1:
			size = my_strlen(ch);
			//printf("size=%i\n",size);

			if(size>20){
				printf("ERROR<E1001>: First parameter is out of boundary\n");
				r = FALSE;				
			}else{
				for(k=0; k < size; k++){
					if(ch[k] == '.'){
						printf("ERROR<E1004>: First parameter is wrong form\n");
						r = FALSE;
					}
				}
				if (r == TRUE){				
					gl_inputfile = (char*)xmalloc(sizeof(char)*(size+5+4+1));
					gl_inputdir  = (char*)xmalloc(sizeof(char)*(size+4+4+1));
					my_strcat(gl_inputfile, "file_");
					my_strcat(gl_inputfile, ch);
					my_strcat(gl_inputfile, ".txt");
					my_strcat(gl_inputfile, "\0");					
					my_strcat(gl_inputdir, "dir_");
					my_strcat(gl_inputdir, ch);
					my_strcat(gl_inputdir, ".txt");				
					my_strcat(gl_inputdir, "\0");				
				}
			}			
			break;							
		case 2:
			val = my_atoi(ch);
			for (j=0, k=1; j <= MAXPOWERDISKSIZE; j++, k*=2){
				if (val == k){
					gl_disksize = val;
					return r;
				}
			}
			printf("ERROR<E1002>: Second parameter is invalid. Check help menu!\n");
			r=FALSE;	
			break;							
		case 3:
			val = my_atoi(ch);
			for (j=0, k=1; j <= MAXPOWERBLOCKSIZE; j++, k*=2){
				if (val == k){
					gl_blocksize = val;
					return r;
				}
			}			
			printf("ERROR<E1003>: Third parameter is invalid. Check help menu!\n");
			r=FALSE;	
			break;				
	}
	return r;
}	
