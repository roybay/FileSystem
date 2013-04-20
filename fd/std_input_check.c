#include "filesystem.h"

int std_input_check(int argc, char** argv){
	int r = TRUE;
	int i;

	if (argc<4){
		if (!my_strcmp("?", argv[1]) || !my_strcmp("help", argv[1]))
			r= std_input_error(0);
		else
			r = std_input_error(4-argc);	
	}else if (argc>4){
		r = std_input_error(argc);
	}else{	
		for (i=1; i<4; i++){
			r = std_param_check(argv[i], i);
			if (r != TRUE){
				return r;
			}				
		}
	}
	return r;	
}
