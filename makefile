obra: main.o pintura.o diseno.o escultura.o literatura.o obras.o
	g++ main.o pintura.o diseno.o escultura.o literatura.o obras.o -o obra

main.o:	main.cpp obras.h literatura.h escultura.h diseno.h pintura.h 
	g++ -c main.cpp

pintura.o:	pintura.cpp obras.h  pintura.h
	g++ -c pintura.cpp

diseno.o:	diseno.cpp obras.h  diseno.h
	g++ -c diseno.cpp

escultura.o:	escultura.cpp obras.h  escultura.h
	g++ -c escultura.cpp

literatura.o:	literatura.cpp obras.h  literatura.h
	g++ -c literatura.cpp

obras.o:	obras.cpp obras.h
	g++ -c obras.cpp