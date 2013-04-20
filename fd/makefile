#for filesystem.h
# (- makefile stops if it cannot delete somthing)
#----------------------------------------------------------
NAME	= fd
RM	= rm -f
SRC	= std_input_check.c std_input_error.c std_param_check.c \
	  read_file.c std_input_files.c init_Ldisk.c print_Ldisk.c \
	  request_Ldisk.c update_Ldisk.c free_Ldisk.c create_Lfile.c \
	  init_dir.c create_GTree.c find_dir.c strcontstr.c init_GDirs.c \
	  init_GFiles.c init_file.c time_stamp.c init_timestamp.c exe_dir.c \
	  exe_chdir.c print_Lfile.c exe_printout.c exe_mkdir.c exe_rmdir.c \
	  exe_mkfile.c exe_rmfile.c free_Lfile.c exe_remove.c exe_append.c \
	  print_GTree.c count_fragmentation.c plus_filesize.c minus_filesize.c \
	   

OBJ	= $(SRC:.c=.o)

TESTNAME= FileSystem
TESTSRC= main.c
TESTOBJ= $(TESTSRC:.c=.o)

LIBS	= -lmy -lqueue_p 
LPATH= ../lib/ -lrt
#----------------------------------------------------------
all:	$(OBJ)

object:	
	cc -c $(SRC)

lib:	
	./queue_p/make fclean;
	

testobj:
	cc -c $(TESTSRC)

clean:	
	-$(RM) *.o
	-$(RM) *~
	-$(RM) \#*
	-$(RM) *.core
	-$(RM) *.gch
#	-$(RM) file_*.txt
#	-$(RM) dir_*.txt

fclean:	clean
	-$(RM) $(TESTNAME)
	
re:	fclean all

test:	all
	cc $(SRC) $(TESTSRC) -L $(LPATH) $(LIBS) -o $(TESTNAME) -Wall
#-Wall

$(NAME):all

rt:	fclean test
#----------------------------------------------------------

