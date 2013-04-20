#include "filesystem.h"
//------------------------------------------------------------------------------
//     ./FileSystem list 65536 512
int main(int argc, char *argv[])
{	
	char	**vect;
	char	curDir[MAX];
	char	buffer[MAX];
	int	n = 0;
	pid_t pid;
	
	t_dir *current, *temp;
			
	getcwd(curDir, MAX);
	if (curDir == NULL)
	{
		my_str("Virtual Memory Exhausted!");
		exit(1);
	}

	if(!std_input_check(argc, argv))
		return EXIT_FAILURE;

	std_input_files();
	init_Ldisk();

	create_GTree();	
	print_Ldisk();
	current = root;
	//print_GTree(current, 0);	
	
/*--------------------------------------------------------------------*/
	while(1)
	{
		my_str(current->fullname);
		my_str("> ");
		
		n = read(0, buffer, MAX-1);	
		buffer[n-1] = '\0';
		vect = (char**)my_str2vect(buffer);
	
		if (my_strcmp(vect[0], "exit") == 0)
			exit(0);

		else if ((my_strcmp(vect[0], "dir") == 0) || (my_strcmp(vect[0], "ls") == 0))
			exe_dir(current);

		else if (my_strcmp(vect[0], "prdisk") == 0)
			print_Ldisk(); 


		else if (my_strcmp(vect[0], "cd") == 0)
		{
			if(my_strcmp(vect[1], "..") == 0){
				if(current == root)
					printf("\033[22;31m You do not have permition! \033[01;37m \n");				
				else{	
					current = current->parentDir;
				}
			}else{			
				temp = exe_chdir(current, vect[1]);
				if (temp != NULL)				
					current = temp;				
				else{
					my_str("bash: cd: ");
					my_str(vect[1]);
					my_str(": No such file or directory\n");
				}								
			}
		}

		else if (my_strcmp(vect[0], "prfiles") == 0)
			exe_printout(current);

		else if (my_strcmp(vect[0], "prgtree") == 0)
			print_GTree(current, 0);	

		else if (my_strcmp(vect[0], "mkdir") == 0)
			exe_mkdir(current, vect[1]);

		else if (my_strcmp(vect[0], "rmdir") == 0)
			exe_rmdir(current, vect[1]);

		else if (my_strcmp(vect[0], "delete") == 0){
			exe_rmdir(current, vect[1]);
			exe_rmfile(current, vect[1]);
		}

		else if ((my_strcmp(vect[0], "cat") == 0) && (my_strcmp(vect[1], ">") == 0))
			exe_mkfile(current, vect[2]);

		else if (my_strcmp(vect[0], "vi") == 0)
			exe_mkfile(current, vect[1]);

		else if (my_strcmp(vect[0], "create") == 0)
			exe_mkfile(current, vect[1]);

		else if (my_strcmp(vect[0], "rm") == 0)
			exe_rmfile(current, vect[1]);

		else if (my_strcmp(vect[0], "remove") == 0)
			exe_remove(current, vect[1], my_atoi(vect[2]));

		else if (my_strcmp(vect[0], "append") == 0)
			exe_append(current, vect[1], my_atoi(vect[2]));
		
		else
		{
			if((pid = fork())<0)
			{	/*error*/
				my_str("Unable to crate a pipe!");
			}
			else if (pid>0)
			{	/*parent*/
				wait();			
			}
			else
			{	/*children*/
				if (execvp(vect[0], vect) < 0)
				{	
					my_str(vect[0]);
					my_str(": command not found!\n");
				}
				exit(1);
			}
		}
	
	}
	return 0;
}
