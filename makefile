main: main.cpp Real.o Radical.o Racional.o
	g++ main.cpp Real.o Radical.o Racional.o -o main

main.o: main.cpp Radical.h Racional.h Radical.h 
	g++ -c main.cpp

Real.o: Real.cpp Real.h
	g++ -c Real.cpp

Radical: Radical.cpp Real.h Radical.h Racional.h
	g++ -c Radical.cpp

Racional.o: Racional.cpp Real.h Racional.h
	g++ -c Racional.cpp

clean:
	rm -f *.o main 