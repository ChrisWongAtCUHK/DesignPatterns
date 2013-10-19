CC = g++
INCLUDE = .
CFLAGS = -g -Wall -ansi
run: after.exe
	@./after.exe
after.exe: Main.cpp Queue.hpp Titan.o Command.o
	$(CC) $(CFLAGS) -o after.exe Main.cpp Titan.o Command.o
Titan.o: Titan.cpp Titan.h
	$(CC) $(CFLAGS) -c Titan.cpp
Command.o: Command.cpp Command.h Titan.h
	$(CC) $(CFLAGS) -c Command.cpp
clean:
	@rm *.exe *.o
	
