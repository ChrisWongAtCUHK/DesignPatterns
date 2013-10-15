CC = g++
INCLUDE = .
CFLAGS = -g -Wall -ansi
run: after.exe
	@./after.exe
after.exe: Main.cpp ISpecialInfected.h SpecialInfected.o DSpecialInfected.o Boomer.o Jockey.o Spitter.o
	$(CC) $(CFLAGS) -o after.exe Main.cpp SpecialInfected.o DSpecialInfected.o Boomer.o Jockey.o Spitter.o
SpecialInfected.o: SpecialInfected.cpp SpecialInfected.h ISpecialInfected.h
	$(CC) $(CFLAGS) -c SpecialInfected.cpp
DSpecialInfected.o: DSpecialInfected.cpp DSpecialInfected.h ISpecialInfected.h
	$(CC) $(CFLAGS) -c DSpecialInfected.cpp
Boomer.o: Boomer.cpp Boomer.h
	$(CC) $(CFLAGS) -c Boomer.cpp
Jockey.o: Jockey.cpp Jockey.h
	$(CC) $(CFLAGS) -c Jockey.cpp
Spitter.o: Spitter.cpp Spitter.h
	$(CC) $(CFLAGS) -c Spitter.cpp
clean:
	@rm *.exe *.o
	