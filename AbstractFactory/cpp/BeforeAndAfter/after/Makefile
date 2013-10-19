CC = g++
INCLUDE = .
CFLAGS = -g -Wall -ansi
run: after.exe
	@./after.exe
runM: afterM.exe
	@./afterM.exe
after.exe: after.cpp WindowsFactory.o WindowsButton.o WindowsMenu.o
	$(CC) $(CFLAGS) -o after.exe after.cpp WindowsFactory.o WindowsButton.o WindowsMenu.o
afterM.exe: after.cpp after.h MotifFactory.o MotifButton.o MotifMenu.o
	$(CC) $(CFLAGS) -o afterM.exe after.cpp MotifFactory.o MotifButton.o MotifMenu.o -D MOTIF
MotifFactory.o: MotifFactory.cpp MotifFactory.h 
	$(CC) $(CFLAGS) -c MotifFactory.cpp 
MotifButton.o: MotifButton.h MotifButton.cpp
	$(CC) $(CFLAGS) -c MotifButton.cpp
MotifMenu.o: MotifMenu.h MotifMenu.cpp
	$(CC) $(CFLAGS) -c MotifMenu.cpp
WindowsFactory.o: WindowsFactory.cpp WindowsFactory.h 
	$(CC) $(CFLAGS) -c WindowsFactory.cpp 
WindowsButton.o: WindowsButton.h WindowsButton.cpp
	$(CC) $(CFLAGS) -c WindowsButton.cpp
WindowsMenu.o: WindowsMenu.h WindowsMenu.cpp
	$(CC) $(CFLAGS) -c WindowsMenu.cpp
clean:
	@rm *.exe *.o
	