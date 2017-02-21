
.PHONY : clean
.SILENT : clean readelf
INCLUDE = -I ../include 
WALL = -Wall

OBJ = ../obj

$(OBJ)/main.o: main.c
	$(CC) $(WALL) $(INCLUDE) -o $@ -c $+

clean : 
	-rm -rf $(OBJ)/*.o  
