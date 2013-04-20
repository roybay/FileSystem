#include "filesystem.h"

time_t init_timestamp(char* month, char* year, char* time)
{
	char *st;
	time_t t;
	st = (char*)xmalloc(sizeof(char)*my_strlen(month)); 
	st = my_strcpy(st, month);
	st = my_strconcat(st, " ");	
	st = my_strconcat(st, year);
	st = my_strconcat(st, " ");
	st = my_strconcat(st, time);
	//printf("CTime: %s\n", st); 
	
	struct tm tm;

	if (strptime(st, "%b %d %H:%M", &tm) == 0)
	    printf("ERROR<E1005>: Time Stamp cannot be created!\n");
	tm.tm_year = 113;//2013-1900 year info is not given 
				  //so I assume files are created in 2013
	tm.tm_isdst = -1;
	tm.tm_sec = 0;
	//printf("year: %d; month : %d;   mday: %d;\n", tm.tm_year, tm.tm_mon, tm.tm_mday);
	//printf("hour: %d; minute: %d; second: %d;\n", tm.tm_hour, tm.tm_min, tm.tm_sec);
	//printf("week day: %d;\n", tm.tm_wday);

	      

	/* Not set by strptime(); tells mktime()
        to determine whether daylight saving time
        is in effect */

	t = mktime(&tm);
	if (t == -1)
   		printf("seconds since the Epoch: %ld\n", (long) t);
	//printf("time_t: %d; \n", (int)t);

	//struct timeval tv;
	//gettimeofday(&tv, NULL); 
	//printf("timeval: %d; \n", (int)tv.tv_sec);

	//printf("-----------------------------------------\n");
	return t;
}
