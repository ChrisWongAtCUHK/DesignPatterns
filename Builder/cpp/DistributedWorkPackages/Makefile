CC = g++
INCLUDE = .
CFLAGS = -g -Wall -ansi
run: dwp.exe
	@./dwp.exe
dwp.exe: Main.cpp Main.h Builder.h DistrWorkPackage.o UnixBuilder.o VmsBuilder.o Reader.o
	$(CC) $(CFLAGS) -o dwp.exe Main.cpp DistrWorkPackage.o UnixBuilder.o VmsBuilder.o Reader.o
DistrWorkPackage.o: DistrWorkPackage.cpp DistrWorkPackage.h
	$(CC) $(CFLAGS) -c DistrWorkPackage.cpp
UnixBuilder.o: UnixBuilder.cpp UnixBuilder.h
	$(CC) $(CFLAGS) -c UnixBuilder.cpp
VmsBuilder.o: VmsBuilder.cpp VmsBuilder.h
	$(CC) $(CFLAGS) -c VmsBuilder.cpp
Reader.o: Reader.cpp Reader.h
	$(CC) $(CFLAGS) -c Reader.cpp
clean:
	@rm *.exe *.o
	