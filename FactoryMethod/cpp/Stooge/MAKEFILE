CC = g++
INCLUDE = .
CFLAGS = -g -Wall -ansi
run: stooge.exe
	@./stooge.exe
stooge.exe: Main.cpp Stooge.o Amby.o ChrisWong.o Ming.o
	$(CC) $(CFLAGS) -o stooge.exe Main.cpp Stooge.o Amby.o ChrisWong.o Ming.o
Stooge.o: Stooge.h Stooge.cpp
	$(CC) $(CFLAGS) -c Stooge.cpp
Amby.o: Amby.h Amby.cpp
	$(CC) $(CFLAGS) -c Amby.cpp
ChrisWong.o: ChrisWong.h ChrisWong.cpp
	$(CC) $(CFLAGS) -c ChrisWong.cpp
Ming.o: Ming.h Ming.cpp
	$(CC) $(CFLAGS) -c Ming.cpp
clean:
	@rm stooge.exe Stooge.o Amby.o ChrisWong.o Ming.o
	