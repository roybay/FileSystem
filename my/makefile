#for libmy.h
# (- makefile stops if it cannot delete somthing)
#----------------------------------------------------------

NAME	= libmy.a
HFILE= my.h
RM	= rm -f
SRC	= my_alpha.c my_char.c my_digits.c my_find.c \
	  my_int.c my_num_base.c my_revstr.c my_rfind.c \
	  my_stdstrnconcat.c my_str.c my_strcat.c my_strcmp.c \
	  my_strconcat.c my_strcpy.c my_strdup.c my_strindex.c \
	  my_strlen.c my_strncmp.c my_strnconcat.c my_strncpy.c \
	  my_strrindex.c my_vect2str.c my_str2vect.c xmalloc.c \
	  my_atoi.c my_itoa.c my_fcntl.c my_pipe.c my_write.c \
	  my_read.c my_close.c

OBJ	= $(SRC:.c=.o)
TESTNAME= test
TESTSRC	= main.c
TESTOBJ = $(TESTSRC:.c=.o)
LIBS	= -lmy
LPATH	= ../lib/
#----------------------------------------------------------
all:	$(OBJ)
	cp $(HFILE) $(LPATH) 
	ar -rc	$(NAME)	$(OBJ)
	ranlib $(NAME)
	cp $(NAME) $(LPATH)

clean:	
	-$(RM) *.o
	-$(RM) *~
	-$(RM) \#*
	-$(RM) *.core

fclean:	clean
	-$(RM) $(LPATH)$(NAME)
	-$(RM) $(TESTNAME)
	-$(RM) $(NAME)

re:	fclean all

test:	$(NAME) $(TESTOBJ)
	cc -L $(LPATH) $(TESTSRC) $(LIBS) -o $(TESTNAME)

$(NAME):all

retest:	fclean test
#----------------------------------------------------------

