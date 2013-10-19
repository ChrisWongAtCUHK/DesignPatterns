CC = g++
INCLUDE = .
CFLAGS = -g -Wall -ansi
run: mediator.exe
	@./mediator.exe
mediator.exe: Main.cpp Widget.o List.o Edit.o FileSelectionDialog.o
	$(CC) $(CFLAGS) -o mediator.exe Main.cpp Widget.o List.o Edit.o FileSelectionDialog.o
List.o: List.cpp List.h Widget.h
	$(CC) $(CFLAGS) -c List.cpp
Edit.o: Edit.cpp Edit.h Widget.h
	$(CC) $(CFLAGS) -c Edit.cpp
Widget.o: Widget.cpp Widget.h
	$(CC) $(CFLAGS) -c Widget.cpp
FileSelectionDialog.o: FileSelectionDialog.cpp FileSelectionDialog.h List.h Edit.h
	$(CC) $(CFLAGS) -c FileSelectionDialog.cpp
clean:
	@rm *.exe *.o
	
