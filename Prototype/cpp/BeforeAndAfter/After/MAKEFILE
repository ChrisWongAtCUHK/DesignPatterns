CC = g++
INCLUDE = .
CFLAGS = -g -Wall -ansi
run: stooge.exe
	@./stooge.exe
stooge.exe: Main.cpp Stooge.o Factory.o Amby.o ChrisWong.o Ming.o
	$(CC) $(CFLAGS) -o stooge.exe Main.cpp Stooge.o Factory.o Amby.o ChrisWong.o Ming.o
Stooge.o: Stooge.cpp Stooge.h
	$(CC) $(CFLAGS) -c Stooge.cpp
Factory.o: Factory.cpp Factory.h
	$(CC) $(CFLAGS) -c Factory.cpp
Amby.o: Amby.cpp Amby.h
	$(CC) $(CFLAGS) -c Amby.cpp
ChrisWong.o: ChrisWong.cpp ChrisWong.h
	$(CC) $(CFLAGS) -c ChrisWong.cpp
Ming.o: Ming.cpp Ming.h
	$(CC) $(CFLAGS) -c Ming.cpp
clean:
	@rm stooge.exe Stooge.o Amby.o ChrisWong.o Ming.o
	