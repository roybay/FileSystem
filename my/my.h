#include <stdlib.h>

#ifndef _MY_H_
#define _MY_H_

	#ifndef NULL
		#define NULL ((void*) 0)
	#endif /*NULL*/
	
	void my_char( char );
	void my_str( char* );
	void my_int( int );
	
	void my_num_base( int, char* ); /* do not write recursive under 10 line*/
	void my_alpha (); /*a....z nothing bigger than byte */
	void my_digits(); /*0..9*/
	int my_strindex( char*, char );
	int my_strrindex( char*, char );
	int my_strlen( char* );
	int my_revstr( char* );
	
	char* my_find(char*, char);
	char* my_rfind(char*, char);
	char* my_strcat(char*, char*);
	int my_strcmp(char*, char*);
	int my_strncmp(char*, char*, int);
	char* my_strconcat(char*, char*);
	char* my_strnconcat(char*, char*, int);
	char* my_stdstrnconcat(char*, char*, int);
	char* my_strcpy(char*, char*);
	char* my_strncpy(char*, char*, int);
	char* my_strdup(char*);
	void* xmalloc(int);

	char* my_vect2str(char**);
	char** my_str2vect(char*);
	int my_atoi(char*);
	void my_itoa(char*, int);

	
	int my_fcntl(int, int, long);
	int my_pipe(int[2]);
	ssize_t my_write(int, const void*, size_t);
	ssize_t my_read(int fd, void* buf, size_t nbytes);
	int my_close(int);
	
	
#endif /*_MY_H_*/
