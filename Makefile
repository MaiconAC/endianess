CC = gcc
CFLAGS = -Wall -Wextra -g

TARGET = -o endianess.bin main.c

endianess:
	$(CC) $(CFLAGS) $(TARGET)
	
clean:
	rm -rf endianess.bin


