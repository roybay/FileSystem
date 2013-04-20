#include "filesystem.h"

int std_input_error(int arg){
	if (arg == 0)
	{
		read_file("README.txt");
	}	
	else if (arg<4)
	{	
		my_str("Invalid input: ");
		my_int(arg);
		my_str(" parameter(s) missing\n");
		my_str("For more info:./FileSystem ? or ./FileSystem help\n");
	}
	else 
	{	
		my_str("Invalid input: Too many parameters\n");
		my_str("For more info:./FileSystem ? or ./FileSystem help\n");
	}
	return FALSE;
}
