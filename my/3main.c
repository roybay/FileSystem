#include "../lib/my.h"

int main()
{	
  
	char val1[32] = "Roy Bayraktaryan Bahian";
	char val2[32] = "Hello";
	char val3[32] = "_World_!!!";
	char val4[32] = "";
	char *p;
	int i;		
  	char str[128] = "life is great!";

	my_str("\nmy_find()\n-----------------\n");
	my_str("1: my_find('Roy Bayraktaryan Bahian', 'y') = ");
	p = my_find(val1, 'y');
	if(p) my_char(*p);
	my_char('\n');	

	my_str("2: my_find('Roy Bayraktaryan Bahian', 'z') = ");
	p = my_find(val1, 'z');
	if(p) my_char(*p);
	my_char('\n');	

	my_str("3: my_find('', 'y') = ");
	p = my_find(val4, 'y');
	if(p) my_char(*p);
	my_char('\n');	

	my_str("4: my_find(NULL, 'y') = ");
	p = my_find(NULL, 'y');
	if(p) my_char(*p);
	my_char('\n');	

	my_str("5: my_find('Roy Bayraktaryan Bahian', space) = ");
	p = my_find(val1, ' ');
	if(p) my_char(*p);
	my_char('\n');	
/***********************************************************/
	my_str("\nmy_rfind()\n-----------------\n");
	my_str("1: my_rfind('Roy Bayraktaryan Bahian', 'y') = ");
	p = my_rfind(val1, 'y');
	my_char(*p);
	my_char('\t');	
	my_int(*p);
	my_char('\n');	

	my_str("2: my_rfind('Roy Bayraktaryan Bahian', 'z') = ");
	p = my_rfind(val1, 'z');
	my_char(*p);
	my_char('\t');	
	my_int(*p);
	my_char('\n');	

	my_str("3: my_rfind('', 'y') = ");
	p = my_rfind(val4, 'y');
	my_char(*p);
	my_char('\t');	
	my_int(*p);
	my_char('\n');	

	my_str("4: my_rfind(NULL, 'y') = ");
	p = my_rfind(NULL, 'y');
	if(p)my_char(*p);
	my_char('\n');	

	my_str("5: my_rfind('Roy Bayraktaryan Bahian', '') = ");
	p = my_rfind(val1, '@');/*it doesn't work NULL char of course*/
	my_char(*p);
	my_char('\t');	
	my_int(*p);
	my_char('\n');	

/***********************************************************/
	my_str("\nmy_strcat()\n-----------------\n");
	my_str("1: my_strcat('Hello', 'empty') = ");
	p = my_strcat(val2, val4);
	my_char(*p);
	my_char('\t');	
	my_int(*p);
	my_char('\t');	
	my_str(p);
	my_char('\n');
	
	my_str("2: my_strcat('Hello', '_World_!!!') = ");
	p = my_strcat(val2, val3);
	my_char(*p);
	my_char('\t');	
	my_int(*p);
	my_char('\t');	
	my_str(p);
	my_char('\n');	
	
	my_str("3: my_strcat('Hello', 'empty') = ");
	p = my_strcat(val2, val4);
	my_char(*p);
	my_char('\t');	
	my_int(*p);
	my_char('\t');	
	my_str(p);
	my_str("\t val2 changed NO MORE HELLO ");
	my_char('\n');	

	my_str("4: my_strcat('Hello_World_!!!', 'NULL') = ");
	p = my_strcat(val2, NULL);
	my_char(*p);
	my_char('\t');	
	my_int(*p);
	my_char('\t');	
	my_str(p);
	my_char('\n');	
	
	my_str("5: my_strcat('EMPTY', 'Hello World!!!') = ");
	p = my_strcat(val4, val2);
	my_char(*p);
	my_char('\t');	
	my_int(*p);
	my_char('\t');	
	my_str(p);
	my_char('\n');	

	my_str("6: my_strcat(NULL, 'Hello World!!!') = ");
	p = my_strcat(NULL, val2);
	if(p) my_char(*p);
	my_char('\n');	
	
	my_str("7: my_strcat(NULL, NULL) = ");
	p = my_strcat(NULL, NULL);
	if(p) my_char(*p);
	my_char('\n');	

/***********************************************************/
	my_str("\nmy_strcmp()\n-----------------\n");
	my_str("1: my_strcmp('Roy', 'Bahian') = ");
	my_int(my_strcmp("Roy", "Bahian"));
	my_char('\n');

	my_str("2: my_strcmp('Bahian', 'Roy') = ");
	my_int(my_strcmp("Bahian", "Roy"));
	my_char('\n');	
	
	my_str("3: my_strcmp('Roy', Empty) = ");
	my_int(my_strcmp("Roy", ""));
	my_char('\n');

	my_str("4: my_strcmp('Roy', NULL) = ");
	my_int(my_strcmp("Roy", NULL));
	my_char('\n');

	my_str("5: my_strcmp('Empty', 'Bahian') = ");
	my_int(my_strcmp("", "Bahian"));
	my_char('\n');
/*
	my_str("6: my_strcmp(NULL, 'Bahian') = ");
	my_int(my_strcmp(NULL, "Bahian"));
	my_char('\n');

	my_str("7: my_strcmp(NULL, NULL) = ");
	my_int(my_strcmp(NULL, NULL));
	my_char('\n');
*/
	my_str("8: my_strcmp('Roy', 'Roy') = ");
	my_int(my_strcmp("Roy","Roy"));
	my_char('\n');

	return 0;
}
