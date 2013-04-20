#include "../lib/my.h"
#define SIZE 1024
int main()
{	
	char	**vect;
	pid_t 	pid;
	char	curDir[SIZE];
	char	buffer[SIZE];
	int	n = 0;
	int	i = 0;
			
	getcwd(curDir, SIZE);
	if (curDir == NULL)
	{
		my_str("Virtual Memory Exhausted!");
		exit(1);
	}	
/*--------------------------------------------------------------------*/
	while(1)
	{
		my_str(curDir);
		my_str("/MyMiniShell$> ");	
		
		n = read(0, buffer, SIZE-1);	
		buffer[n-1] = '\0';
		vect = (char**)my_str2vect(buffer);
	
		if (my_strcmp(vect[0], "exit") == 0)
			exit(0);
		else if (my_strcmp(vect[0], "cd") == 0)
		{
			n = chdir(vect[1]);
			if (n == -1)
			{	
				my_str("bash: cd: ");
				my_str(vect[1]);
				my_str(": No such file or directory\n");
			}	
			getcwd(curDir, SIZE);
		}
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
