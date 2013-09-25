CC = g++
INCLUDE = .
CFLAGS = -g -Wall -ansi
run: before.exe
	@./before.exe
before.exe: Main.cpp Queue.h Queue.tpp Titan.o
	$(CC) $(CFLAGS) -o before.exe Main.cpp Titan.o
Titan.o: Titan.cpp Titan.h
	$(CC) $(CFLAGS) -c Titan.cpp
clean:
	@rm *.exe *.o
	