#ifndef _libqueue_p_
	#define _libqueue_p_
   
	#ifndef NULL
		#define NULL ((void*) 0)
	#endif /*NULL*/	
   
	#include <errno.h>  
	#include <stdio.h>
	#include <stdlib.h>
	#include <unistd.h>
	#include "../lib/my.h"	
/*----------------------------------------------------------*/
	typedef struct sp_node
	{
		int* object;
		struct sp_node *previous;
		struct sp_node *next;
		int count;
	} 	p_node;
/*----------------------------------------------------------*/
	typedef struct squeue_p_t
	{
		p_node *head;
		int size;
	}	queue_p_t;
/*----------------------------------------------------------*/
	int p_init(queue_p_t *);
	int p_push(queue_p_t *, void *, int);
	int p_node_update(queue_p_t *, void *);
	void* p_pop(queue_p_t *);
	int p_remove(queue_p_t *, void *);
	void* p_find(queue_p_t *, void *);
/*----------------------------------------------------------*/
#endif /*_libqueue_p_*/
