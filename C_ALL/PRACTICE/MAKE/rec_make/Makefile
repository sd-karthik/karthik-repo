

.PHONY : clean 

SUBDIRS  = src1 src2 src3 

OBJ = ./obj/*.o

vpath %.c src1 src2 src3

.PHONY : $(SUBDIRS) 

app : $(SUBDIRS) 
	gcc -o $@ $(OBJ) 
src1:
	make -C src1 
src2:
	make -C src2
src3:
	make -C src3
clean:
	make -C src1 clean 
	make -C src2 clean 
	make -C src3 clean 
	-@rm -rf app 
