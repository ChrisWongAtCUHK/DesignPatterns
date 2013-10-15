CC = g++
INCLUDE = .
CFLAGS = -g -Wall -ansi
run: denomObserver.exe
	@./denomObserver.exe
denomObserver.exe: Main.cpp Subject.o Observer.o DivObserver.o ModObserver.o
	$(CC) $(CFLAGS) -o denomObserver.exe Main.cpp Subject.o Observer.o DivObserver.o ModObserver.o
Subject.o: Subject.h Subject.cpp
	$(CC) $(CFLAGS) -c Subject.cpp
Observer.o: Observer.h Observer.cpp
	$(CC) $(CFLAGS) -c Observer.cpp
DivObserver.o: DivObserver.h DivObserver.cpp Observer.o
	$(CC) $(CFLAGS) -c DivObserver.cpp
ModObserver.o: ModObserver.h ModObserver.cpp Observer.o
	$(CC) $(CFLAGS) -c ModObserver.cpp
clean:
	@rm denomObserver.exe Subject.o Observer.o DivObserver.o ModObserver.o
	