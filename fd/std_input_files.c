#include "filesystem.h"

void std_input_files(){
//	char* inD;
//	char* inF;
	
/*	inD = (char*)xmalloc(sizeof(char)*(50));
	my_strcpy(inD, "find ./ -type d > ");
	my_strcat(inD, gl_inputdir);
	system(inD);
	
	inF = (char*)xmalloc(sizeof(char)*(50));
	my_strcpy(inF, "find ./ -type f -ls > ");
	my_strcat(inF, gl_inputfile);
	system(inF);
*/
	my_str(gl_inputfile);
	my_char('\t');
	my_str(gl_inputdir);
	my_char('\n');
}
