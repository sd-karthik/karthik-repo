CC=gcc -Wall
INCLUDE=header
.PHONY: clean
VPATH=./source ./object ./header
SRC= $(shell ls ./source)
OBJ= $(SRC:.c=.o)

EXE: $(OBJ)
	$(CC) -o $@ $^ 
	rm main_fun.o
	mv *.o ./object
%.o:%.c header.h
	$(CC) -c $^ -I $(INCLUDE)
clean:
	-@rm ./object/*.o
	-@rm EXE

