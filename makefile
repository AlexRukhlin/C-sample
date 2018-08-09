all: ttt.exe

ttt.exe: main.o
	 gcc -o ttt.exe main.o

ttt.o: main.c
	 gcc -c main.c
     
test:
	 rm main.o ttt.exe
