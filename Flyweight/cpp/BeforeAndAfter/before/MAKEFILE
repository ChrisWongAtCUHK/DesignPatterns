CC = g++
INCLUDE = .
CFLAGS = -g -Wall -ansi
run: before.exe
	@./before.exe
before.exe: Main.cpp
	$(CC) $(CFLAGS) -o before.exe Main.cpp 
clean:
	@rm *.exe *.o
	
