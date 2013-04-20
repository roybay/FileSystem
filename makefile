#manage all makefiles
#----------------------------------------------------------
all:	
	cd my; make 
	cd queue_p; make
	cd fd; make
	
clean:	
	cd my; make clean 
	cd queue_p; make clean
	cd fd; make clean
	-$(RM) *~
	
fclean:	
	cd my; make fclean 
	cd queue_p; make fclean
	cd fd; make fclean
	-$(RM) *~

test:	all
	cd fd; make test
#----------------------------------------------------------

