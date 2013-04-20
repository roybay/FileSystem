#include "../lib/my.h"


int main()
{	
  	char **pid ;
	char val1[32] = "Roy Bayraktaryan Bahian";
	char val2[32] = "Hello";
	char val3[32] = "_World_!!!";
	char val4[32] = "";
	char *p;
	int id = 539;		
  	char str[128] = "life is great!";
	randomID(pid, id);

/*my_strcat(pid, "PID-");
my_itoa(&(pid[4]), id);
my_strcat(pid, "-");
my_itoa(&(pid[my_strlen(pid)]), random());
*/

	
	my_str("\nmy_strcat()\n-----------------\n");
	my_str("1: my_strcat('Hello', 'empty') = ");
	/*
	my_char(*pid);
	my_char('\t');	
	my_int(*pid);
	my_char('\t');	
	my_str(pid);
	my_char('\n');*/
}
void randomID(char **p, int id){
	char **pid;
	pid = (char**)xmalloc(sizeof(char)*20);

	my_strcat(pid, "PID-");
	my_itoa(&(pid[4]), id);
	my_strcat(pid, "-");
	my_itoa(&(pid[my_strlen(pid)]), random());
	*p = pid;
}


