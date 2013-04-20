#include "../lib/my.h"
int my_atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int num = 0;

	if (s == NULL)
		return num;

	while (s[i] != '\0' && s[i] != '-' && s[i] != '+' && s[i]<'0' || s[i]>'9')
		i++;

	for (; s[i] == '-' || s[i] == '+' ; i++)
		if (s[i] =='-')
			sign *= -1;

	while (s[i]>='0' && s[i]<='9')
		num = num * 10 + (s[i++] - '0');

	num *= sign;
	return num;
}
