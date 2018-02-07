main: main.o Random.o
	g++ -o main main.o Random.o
main.o: main.cpp
	g++ -c main.cpp
random.o: Random.cpp
	g++ -c Random.cpp
clean:
	rm *.o main
