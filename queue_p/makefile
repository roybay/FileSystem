#for libqueue_p.h
# (- makefile stops if it cannot delete somthing)
#----------------------------------------------------------

NAME	= libqueue_p.a
HFILE= queue_p.h
RM	= rm -f
SRC	= p_init.c p_push.c p_node_update.c p_pop.c p_remove.c \
	  p_find.c

OBJ	= $(SRC:.c=.o)
TESTNAME= test
TESTSRC	= main.c
TESTOBJ = $(TESTSRC:.c=.o)
LIBS	= -lqueue_p -lmy
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

rt:	fclean test
#----------------------------------------------------------

