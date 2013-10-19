CC = g++
INCLUDE = .
CFLAGS = -g -Wall -ansi
run: before.exe
	@./before.exe
before.exe: Main.cpp SpecialInfected.o Boomer.o Jockey.o Spitter.o BoomerAndJockey.o BoomerAndJockeyAndSpitter.o
	$(CC) $(CFLAGS) -o before.exe Main.cpp SpecialInfected.o Boomer.o Jockey.o Spitter.o BoomerAndJockey.o BoomerAndJockeyAndSpitter.o
SpecialInfected.o: SpecialInfected.cpp SpecialInfected.h
	$(CC) $(CFLAGS) -c SpecialInfected.cpp
Boomer.o: Boomer.cpp Boomer.h
	$(CC) $(CFLAGS) -c Boomer.cpp
Jockey.o: Jockey.cpp Jockey.h
	$(CC) $(CFLAGS) -c Jockey.cpp
Spitter.o: Spitter.cpp Spitter.h
	$(CC) $(CFLAGS) -c Spitter.cpp
BoomerAndJockey.o: BoomerAndJockey.cpp BoomerAndJockey.h
	$(CC) $(CFLAGS) -c BoomerAndJockey.cpp
BoomerAndJockeyAndSpitter.o: BoomerAndJockeyAndSpitter.cpp BoomerAndJockeyAndSpitter.h
	$(CC) $(CFLAGS) -c BoomerAndJockeyAndSpitter.cpp
clean:
	@rm *.exe *.o
	