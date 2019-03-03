all:
	g++ main.cpp insert.cpp traverse.cpp minmax.cpp deletesrch.cpp verticalorder.cpp bottomtopview.cpp leftrightview.cpp sumpredecessor.cpp -o output.o
run:
	g++ main.cpp insert.cpp traverse.cpp minmax.cpp deletesrch.cpp verticalorder.cpp bottomtopview.cpp leftrightview.cpp sumpredecessor.cpp -o output.o
	./output.o
clean:
	rm -rf *.o 
