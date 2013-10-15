CC = g++
INCLUDE = .
CFLAGS = -g -Wall -ansi
run: vistor.exe
	@./vistor.exe
vistor.exe: Main.cpp Visitor.h Component.o Primitive.o Composite.o AddVisitor.o 
	$(CC) $(CFLAGS) -o vistor.exe Main.cpp Component.o Primitive.o Composite.o AddVisitor.o
Component.o: Component.cpp Component.h Visitor.h
	$(CC) $(CFLAGS) -c Component.cpp
Primitive.o: Primitive.cpp Primitive.h Component.h Visitor.h
	$(CC) $(CFLAGS) -c Primitive.cpp
Composite.o: Composite.cpp Composite.h Component.h Visitor.h
	$(CC) $(CFLAGS) -c Composite.cpp
AddVisitor.o: AddVisitor.cpp AddVisitor.h Primitive.h Component.h Visitor.h
	$(CC) $(CFLAGS) -c AddVisitor.cpp
clean:
	@rm *.exe
	
