CC = g++
INCLUDE = .
CFLAGS = -g -Wall -ansi
run: before.exe
	@./before.exe
runM: beforeM.exe
	@./beforeM.exe
before.exe: before.cpp WindowsButton.o WindowsMenu.o
	$(CC) $(CFLAGS) -o before.exe before.cpp WindowsButton.o WindowsMenu.o
beforeM.exe: before.cpp before.h WindowsButton.o WindowsMenu.o
	$(CC) $(CFLAGS) -o beforeM.exe before.cpp MotifButton.o MotifMenu.o -D MOTIF
MotifButton.o: MotifButton.h MotifButton.cpp
	$(CC) $(CFLAGS) -c MotifButton.cpp
MotifMenu.o: MotifMenu.h MotifMenu.cpp
	$(CC) $(CFLAGS) -c MotifMenu.cpp
WindowsButton.o: WindowsButton.h WindowsButton.cpp
	$(CC) $(CFLAGS) -c WindowsButton.cpp
WindowsMenu.o: WindowsMenu.h WindowsMenu.cpp
	$(CC) $(CFLAGS) -c WindowsMenu.cpp
clean:
	@rm *.exe *.o
	