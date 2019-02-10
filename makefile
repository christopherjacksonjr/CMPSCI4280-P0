CC = g++
CFLAGS = -g
TARGET = P0
OBJS = main.c
.SUFFIXIES: .c .o

$(TARGET): $(OBJS)
	$(CC) -o $@ $(OBJS)
.c.o:
	$(CC) $(CFLAGS) -c $<
clean:
	/bin/rm -f *.o $(TARGET)
