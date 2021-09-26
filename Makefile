# Makefile

main: main.o shapes.o checkerboard.o
	g++ -o main main.o shapes.o checkerboard.o

main.o: main.cpp shapes.h checkerboard.h
	g++ -c main.cpp

shapes.o: shapes.cpp shapes.h
	g++ -c shapes.cpp

checkerboard.o: checkerboard.cpp checkerboard.h
	g++ -c checkerboard.cpp

clean:
	rm -f main.o shapes.o checkerboard.o
