#include "filesystem.h"

void exe_dir(t_dir* lroot)
{
	int i, j, k;//,n, c;
	k = lroot->GDir->size + lroot->GFiles->size;
	if(k == 0){
		return;
	}
	printf("i= %i\n", k);
	
	p_node *currentChild;
	char** vect;
	
	if(lroot->GDir->size != 0){
		currentChild = lroot->GDir->head;
	
		t_dir *cd;
		cd = (t_dir*)currentChild->object;
	
		vect = (char**)xmalloc(sizeof(char*)*k+1);
		for (j = 0; j < (lroot->GDir->size) ; j++){
			vect[j] = (char*)cd->name;
			currentChild = currentChild->next;
	  		cd = (t_dir*)currentChild->object;
		}
	}
	
	if(lroot->GFiles->size != 0){	
		currentChild = lroot->GFiles->head;
		t_metafile *cf;	
		cf = (t_metafile*)currentChild->object;

		for (i = 0; i < (lroot->GFiles->size) ;i++, j++){
			vect[j] = (char*)cf->filename;
			currentChild = currentChild->next;
	  		cf = (t_metafile*)currentChild->object;
		}
	}
	
	for (i=0, j=lroot->GDir->size; i<k ; i++, j--){
		if (j>0)		
			printf("\033[01;34m%s \033[01;37m \n", vect[i]);
		else
			printf("%s \n", vect[i]);
	}

	
	int namelength = 0;
	for (i=0; i<k ; i++)
		if(namelength < my_strlen(vect[i]))
			namelength = my_strlen(vect[i]);
	namelength +=3;
	//printf("name length: %i\n", namelength);

	struct winsize w;
	ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);
 	//printf ("lines %d\n", w.ws_row);
   	//printf ("columns %d\n", w.ws_col);
	
/*	int col;
	col = w.ws_col / namelength;
	//printf("column: %i\n", col);
	col-=1;
	c=0;
	for (i=0, j=lroot->GDir->size; i<k ; i++, j--){
				
		if (j>0){			
			my_str(vect[i]);
			for( n=0; n<(namelength - my_strlen(vect[i])); n++)
				my_char(' ');
			if (c < col)
				c++;
			else{
				c=0;
				my_char('\n');
			}
		}else{
			my_str(vect[i]);
			for( n=0; n<(namelength - my_strlen(vect[i])); n++)
				my_char(' ');
			if (col > c)
				c++;
			else{
				c=0;
				my_char('\n');
			}
		}
	}
	
	for(i=0; i<k-1 ; ){
		for(j=0; j<col; j++, i++){
			my_str(vect[i]);
			for( n=0; n< (namelength- my_strlen(vect[i+j])); n++)
				my_char(' ');
		}
		my_char('\n');	
	}*/
	my_char('\n');
	
	
}
