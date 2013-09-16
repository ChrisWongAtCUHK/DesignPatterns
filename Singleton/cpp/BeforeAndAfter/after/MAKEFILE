CC = g++
INCLUDE = .
CFLAGS = -g -Wall -ansi
run: after.exe
	@./after.exe
after.exe: after.cpp after.h GlobalChrisWong.o
	$(CC) $(CFLAGS) -o after.exe after.cpp GlobalChrisWong.o
GlobalChrisWong.o: GlobalChrisWong.cpp GlobalChrisWong.h
	$(CC) $(CFLAGS) -c GlobalChrisWong.cpp
clean:
	@rm *.exe *.o
	