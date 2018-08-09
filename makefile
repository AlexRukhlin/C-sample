all: ttt.exe

ttt.exe: ttt.o
	 gcc -o ttt.exe ttt.o

ttt.o: main.c
	 gcc -c main.c
     
clean:
	 rm ttt.o ttt.exe
