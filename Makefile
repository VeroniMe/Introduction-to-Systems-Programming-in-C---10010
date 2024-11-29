CC=gcc
OBJS=q1.o q2.o main.o helpFunctions.o
EXEC=prog
DEBUG = -g
CFLAGS = -std=c99  -Wall -Werror $(DEBUG)

$(EXEC) : $(OBJS)
	$(CC) $(OBJS) -o $@

q2.o: q2.c q2.h
q1.o: q1.c q1.h
main.o: main.c 
helpFunctions.o: helpFunctions.c helpFunctions.h

clean: 
	rm -f $(EXEC) $(OBJS)
	

