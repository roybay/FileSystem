#include "../lib/my.h"

void my_itoa(char* str, int k)
{
	unsigned int i;
	unsigned int m;

	if(str != NULL){
		i = 0;
		if(i < 0){
			i *= -1;
			str[i++] = '-';
		}
		for(m = 10; m <= k; m *= 10)
		;

		for(m /= 10; m; k %= m, m /= 10){
			str[i++] = (char)(k/m + 48);
		}
	}
}
