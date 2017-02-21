
.PHONY : clean

INCLUDE = -I ../include 
WALL = -Wall 
OBJ = ../obj

$(OBJ)/add.o: add.c
	$(CC) $(WALL) $(INCLUDE) -o $@ -c $+

clean : 
	rm -rf $(OBJ)/add.o
