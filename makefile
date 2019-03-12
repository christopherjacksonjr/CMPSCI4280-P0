CC = g++
CFLAGS = -g
TARGET = P0
HEADER = tree.h node.h
OBJS = main.c tree.cpp
.SUFFIXIES: .c .o

$(TARGET): $(OBJS)
	$(CC) -o $@ $(OBJS)
.c.o: $(HEADER)
	$(CC) $(CFLAGS) -c $<
clean:
	/bin/rm -f *.o $(TARGET)
