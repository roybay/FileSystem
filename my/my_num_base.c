#include "../lib/my.h"
void my_num_base(int num, char* c)
{	
	int base = 0 ;
	int divisor=1;	
	if (c!= NULL){
		base = my_strlen(c);
		if (num<0){
			my_char('-');
			num *= -1;
			}			
		if (base == 0)
			my_str("You have an empty BASE\n");
		else if (base == 1)
			for (divisor=0;divisor<num;divisor++) my_char(c[0]);
		else{
			while ((num/divisor) > 0) divisor*= base;
			if (divisor==1) my_char(c[num]);
			while( ( divisor /= base )>=1 ){
				my_char(c[num/divisor]);
				num %= divisor;}
			}
		}
	else
		my_str("You have a NULL pointer.\n");		
}
