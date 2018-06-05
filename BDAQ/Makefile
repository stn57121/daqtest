#makefile for program

CC	= gcc
CFLAGS	= -Wall -02
OBJS	= BDAQ.o check_int.o DeleteHeadSpace.o Enum.o EnumMap.o MakeEnumMap.o Node.o NodeType.o read_node.o Splitline.o
PROGRAM	= readlog

.SUFFIXES: .c .o

.PHONY: all
all: depend $(PROGRAM)

$(PROGRAM): $(OBJS)
	$(CC) -o $(PROGRAM) $^

.c.o:
	$(CC) $(CFLAGS) -c $<

.PHONY: clean
clean:
	$(RM) $(PROGRAM) $(OBJS) depend.inc

.PHONY: depend
depend: $(OBJS:.o=.c)
	-@ $(RM) depend.inc
	-@ for i in $^; do cpp -MM $$i | sed "s/\ [_a-zA-Z0-9][_a-zA-Z0-9]*\.c//g" >> depend.inc; done

-include depend.inc