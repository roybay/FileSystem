#include "../lib/my.h"
void my_int(int i){
	unsigned int e;
	unsigned int u;
	
	if (i<0) 
		my_char('-');
	u = (i<0) ? -i : i;
	for(e=1 ; (u/e)>=10 ; e*=10)
	;
	for(; e ; u%=e , e/=10)
		my_char('0' + (u/e));
}
/*
long divisor= -1;
	if (i>=0) i *=-1;
	else my_char('-');
	while ((i/divisor) > 10) divisor *= 10;		
	while( divisor <= -1 ){
		my_char((char)(i/divisor) + '0');
		i %= divisor;
		divisor /= 10;}	
}*/
