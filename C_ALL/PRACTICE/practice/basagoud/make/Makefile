.PHONY:clean
VPATH=./source ./object ./header

exe:main.o  fun.o fun1.o
	gcc -o $@ $^ -I ./header
	rm main.o
	mv *.o ./object
main.o : main.c
	gcc -c ./source/main.c -I ./header
fun.o : fun.c
	gcc -c ./source/fun.c -I ./header
fun1.o : fun1.c
	gcc -c ./source/fun1.c -I ./header

clean:
	rm exe
	rm ./object/*.o
