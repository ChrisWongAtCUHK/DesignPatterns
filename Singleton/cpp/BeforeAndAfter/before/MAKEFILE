CC = g++
INCLUDE = .
CFLAGS = -g -Wall -ansi
run: before.exe
	@./before.exe
before.exe: before.cpp before.h GlobalChrisWong.o
	$(CC) $(CFLAGS) -o before.exe before.cpp GlobalChrisWong.o
GlobalChrisWong.o: GlobalChrisWong.cpp GlobalChrisWong.h
	$(CC) $(CFLAGS) -c GlobalChrisWong.cpp
clean:
	@rm *.exe *.o
	