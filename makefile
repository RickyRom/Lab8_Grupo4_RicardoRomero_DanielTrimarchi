Main: 	trimaricky.o Real.o Racional.o Radical.o
	g++ trimaricky.o Real.o Racional.o Radical.o -o Main

trimaricky.o:	trimaricky.cpp Real.h Racional.h Radical.h
	g++ -c trimaricky.cpp
Real.o: 	Real.h Real.cpp 
	g++ -c Real.cpp
Racional.o: 	Racional.h Racional.cpp Real.h Real.cpp
	g++ -c Racional.cpp
Radical.o: 	Radical.h Radical.cpp Real.h Real.cpp
	g++ -c Radical.cpp