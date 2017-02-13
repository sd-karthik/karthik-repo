.PHONY : clean

CC = gcc -Wall
INCLUDE = ./hdr
VPATH = ./src ./obj
SRC = $(shell ls ./src)
OBJ = $(SRC:.c=.o)

app : $(OBJ)
	$(CC) -g -o $@ $^ -lrt
	rm main.o
	mv *.o ./obj
	
%.o :%.c 
	$(CC) -c $^ -I $(INCLUDE) 

clean:
	-@rm ./obj/*.o
	rm app
