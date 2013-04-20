#ifndef _FILESYSTEM_H_
#define _FILESYSTEM_H_
//------------------------------------------------------------
//Preprocessor
	#ifndef NULL
		#define NULL ((void*) 0)
	#endif /*NULL*/
	
	#define FALSE 0
	#define TRUE 1
	#define FREE 0
	#define USED 1
	#define MAXPOWERDISKSIZE 30 //1073741824
					 
	#define MAXPOWERBLOCKSIZE 10
	#define MAX 1024
//------------------------------------------------------------
//Libraries 
	#include <sys/time.h>
	#include <time.h>
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#include <unistd.h>
	#include <sys/ioctl.h>
	#include <fcntl.h>
	#include <errno.h>
	#include "../lib/my.h"
	#include "../lib/queue_p.h"
		
//------------------------------------------------------------
//struct ~ type
	typedef int bool;

	struct timeval tvbegin;

	typedef struct s_disk{
		bool status;		
		int begin;
		int end;
		struct s_disk *next;
	} 	t_disk;	

	typedef struct s_file{
		int pma; //Physical memory address
		struct s_file *next;
	}	t_file;

	typedef struct s_metafile{
		char* filename;
		char* fullname;
		char* path;
		int	 filesize;
		time_t tv;
		t_file *LFile;
	}	t_metafile;

	typedef struct s_dir{
		struct s_dir *parentDir;
		char* name;
		char* fullname;
		char* path;
		queue_p_t* GDir;
		queue_p_t* GFiles;
	}	t_dir;
	
	t_dir *root;	
//------------------------------------------------------------
//gl_vars
	char *gl_inputfile;
	char *gl_inputdir;
	unsigned long int	gl_disksize;
	int 	gl_blocksize;
	unsigned long int 	gl_totalblock;
	t_disk *Ldisk;
	int gl_filecount;
	int gl_dircount;
	int gl_fragmentation;
	int gl_freespace;
//------------------------------------------------------------
//c files
	//main exe
	void exe_dir(t_dir*);
	t_dir* exe_chdir(t_dir*, char*);
	void exe_printout(t_dir*);
	void exe_mkdir(t_dir*, char*);
	void exe_rmdir(t_dir*, char*);
	void exe_mkfile(t_dir*, char*);
	void exe_rmfile(t_dir*, char*);
	void	exe_remove(t_dir*, char*, int);
	void	exe_append(t_dir*, char*, int);	

	//Input Check:
	int std_input_check(int, char**);
	int std_input_error(int);
	int std_param_check(char*, int);
	void std_input_files();
	void read_file(char*);

	//GTree:
	t_dir* init_dir(t_dir*, char*);
	t_metafile* init_file(char**);
	void create_GTree();
	void init_GDirs();
	void init_GFiles();
	t_dir* find_dir(t_dir*, char*);
	bool strcontstr(char*, char*);
	time_t init_timestamp(char*, char*, char*);
	time_t time_stamp();
	void print_GTree(t_dir*, int);

	
	//LFile:
	t_file* create_Lfile(int);
	void print_Lfile(t_file*, int);
	void free_Lfile(t_file*);
	int count_fragmentation(int);
	void plus_filesize(int);
	void minus_filesize(int);
	
	//LDisk:
	void init_Ldisk();
	void print_Ldisk();
	int request_Ldisk();
	void update_Ldisk();
	void free_Ldisk(int);	
//------------------------------------------------------------
#endif /*_FILESYSTEM_H_*/
