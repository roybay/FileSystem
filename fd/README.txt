FileSystem(4)

NAME
     FileSystem

SYNOPSIS
     FileSystem <input_files> <disk_size> <block_size>

DESCRIPTION
     The goal of this assignment is to manage a file system by first
     instantiating a file system based on an existing directory structure, 
     and then manipulating the files in the system. The program implements
     three primary data structures in the files system. The program accepts
     the following parameters at the command prompt in the order specified:	
	
     <input_files>       Input files storing information on directorues and 
                         files. 
                         Type is external files name.
					Maximum length of the file size is 20 char.
	
     <disk_size>         The size of the disk.
                         Type is possitive integer.
                         Maximum disk size is 2 to the power of 30.	

     <block_size>        The size of the black
                         Type is positive integer.		
                         Maximum block size is 2 to the power of 10.		

     <help>              Display manual page.

     <?>                 Display manual page.

EXAMPLES
     ./FileSystem list 65536 32
          Receive 1 file names
          one is proccecer list and the other one is running procceser list.
          It runs the simulator algorithm for page size of equal to 2.
          FIFO replacement algorithm with pre-paging.
          
     ./pc ?
          Shows manual page.
     ./pc help
          Shows manual page.

AUTHOR
     Written by Roy Bahian.

REPORTING BUGS
     Please report sempipetest bugs to roy@bahian.us

RETURN
     Each item will be printed out.
     
NOTES
     Fist two parameters will be tested if it is maximum lenght of 20 character. 
     Third parameter will be tested if it is positive integer power of two. It 
     is allowed up to 32. Constant can be change in header file. 
     Forth parameter will be tested if it is FIFO, LRU or CLOCK
     Fifth parameter will be tested wheather is + or -.

FUNCTIONS
     cd <directory>
           set specified directory as the current directory
           cd .. is a special function that set parent diectory as current one.
           Examples: ./>cd abc
                     ./abc>
				
     ls
          list all files and sub-directories in current directory

     dir
          list all files and sub-directories in current directory same as unix

     prgtree
          print outdirectory tree in breadth-first order

     prfiles
          print out all file information in current directory.

     prdisk
          print out disk space information    

     mkdir <name>
          create a new directory in the current directory

     rmdir <name>
          remove directory from the current directory
          It has to be empty. Otherwise display error message.

     create <name>
          create a new file in the current directory

     vi <name>
          create a new file in the current directory

     cat > <name>
          create a new file in the current directory

     append <name> <bytes>
          append a number of bytes to the file

     remove <name> <bytes>
          delete a number of bytes from the file

     delete <name>
          delete the file or directory

     exit
          exit program

ERRORS
     <E1001>             std_param_check       line 11
     <E1002>             std_param_check       line 40
     <E1003>             std_param_check       line 49
     <E1004>             std_param_check       line 18
     <E1005>             init_timestamp        line 17
     <E1006>             init_GFiles           line 36
     

