main:    main.cpp Radical.o 
	g++ main.cpp Radical.o -o main
main.o:	main.cpp Radical.h 
	g++ -c main.cpp
Radical:	Radical.cpp Radical.h
	g++ -c Radical.cpp
clean:
	rm  *.o main 